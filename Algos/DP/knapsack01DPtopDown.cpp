#include<bits/stdc++.h>
using namespace std;

class knapSacK{
    public:
    int solveKnapsack(const vector<int> &profits , const vector<int> &weights , int capacity){
        vector < vector <int > > dp( profits.size() , vector<int>(capacity + 1  , -1));
        return this->knapSacKRecursive(dp  , profits , weights , capacity , 0 );
    }

    private:
        int knapSacKRecursive(vector<vector <int> > &dp, const vector<int > &profits , const vector <int> &weights , int capacity , int currentIndex){
            if(capacity <= 0 || currentIndex >= profits.size()){
                return 0;
            }

            //checking if already filled the dp
            if(dp[currentIndex][capacity] != -1){
                return dp[currentIndex][capacity];
            }

            int profit1 = 0;
            if(weights[currentIndex] <= capacity ){
                profit1 = profits[currentIndex] + knapSacKRecursive(dp , profits , weights , capacity - weights[currentIndex] , currentIndex+1);
            }
            

            int profit2 = knapSacKRecursive(dp , profits , weights , capacity , currentIndex+1);
            
            dp[currentIndex][capacity]  = max(profit1 , profit2);
            return dp[currentIndex][capacity];
        }
};


int main(){
    knapSacK ks;
    vector<int> weights = {1,2,3,5};
    vector<int> profits = {1,6,10,16};
    int capacity = 7;
    int maxProfit = ks.solveKnapsack(profits , weights , capacity);

    cout<<"Total knapSack Profit --> " <<maxProfit<<endl;
}