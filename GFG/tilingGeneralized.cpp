// https://www.geeksforgeeks.org/count-number-ways-tile-floor-size-n-x-m-using-1-x-m-size-tiles/
#include<bits/stdc++.h>
using namespace std;

int countWays(int n , int m){
    int count[n+1];

    count[0]=0;
    
    for(int i=1 ; i <= n ; i++){

        if(m > i){
            count[i] = 1;
        }

        else if(m == i){
            count[i] = 2;
        }

        else if( m < i ){
            count[i] = count[i-1] + count[i-m];
        }
    }
    return count[n];

}

int main(){
    int n,m;
    cin>>n>>m;

    cout<<"Number of  ways:- "<<countWays(n,m)<<'\n';
}
    
 