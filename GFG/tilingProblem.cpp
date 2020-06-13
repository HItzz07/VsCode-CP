//https://www.geeksforgeeks.org/tiling-problem/
//floor 2xN  tile-> 2x1
#include<bits/stdc++.h>
using namespace std;

int tiling(int n){
    int ways[n+1];
    
    for(int i=0;i<=n;i++){
        if(i <= 2) 
            ways[i] = i;
        
        else
            ways[i] = ways[i-1]+ways[i-2];
    }
    return ways[n];
}

int main(){
    int n;
    cin>>n;
    
    cout<<"No of ways of tiling is:- "<<tiling(n)<<'\n';
}