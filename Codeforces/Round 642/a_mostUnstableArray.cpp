#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,numOfValues,numOfZeroes;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        if(n==1){
            cout<<0<<endl;
        }

        else if (n == 2){
            cout<<m<<endl;
        }
        else{
            cout<<m*2<<endl;
                // if( n % 2 == 0){
                //  numOfZeroes = n/2;
                //  numOfValues = n- numOfZeroes;
                // }
                // else{
                //  numOfZeroes = n/2 + 1;
                //  numOfValues = n - numOfZeroes;
                // }
                

                // int result = m * numOfValues;
                // cout<<result<<endl;
            }
    }
}