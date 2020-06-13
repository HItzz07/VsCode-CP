#include<bits/stdc++.h>
using namespace std;

class knapSack{
    public:
     int solveKnapsack(const vector <int> &profits , const vector<int> &weights , int capacity ){
         if(capacity <= 0 || profits.empty() || weights.size() != profits.size() ){
             return 0;
         }

         int n = profits.size();
         vector < vector <int > > dp(n ,vector <int>(capacity + 1) ); 
     
        //putting 0 in the 0 capacity column
        for(int i=0;i<n;i++){
            dp[i][0] = 0;
        }

        // if we have only one weight, we will take it if it is not more than the capacity
        for (int c = 0; c <= capacity; c++) {
            if (weights[0] <= c) {
                dp[0][c] = profits[0];
            }
        }


        //process all subarrays for all the capacities
        for(int i=1 ; i< n ; i++){
            for(int c = 1 ; c <= capacity ; c++ ){
                int profit1=0, profit2=0;

                if(weights[i] <=c){
                    profit1 = profits[i] + dp [i-1][c-weights[i]];
                }

                profit2 = dp[i-1][c];


                //max
                dp[i][c] = max(profit1 , profit2);
            }
        }
        return dp[n-1][capacity];
     } 
};

int main(){

    knapSack ks;
    vector<int> weights = {1,2,3,5};
    vector<int> profits = {1,6,10,16};
    int capacity = 7;
    int maxProfit = ks.solveKnapsack(profits , weights , capacity);

    cout<<"Total knapSack Profit --> " <<maxProfit<<endl;

}