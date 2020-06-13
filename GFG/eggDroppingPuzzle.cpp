#include<bits/stdc++.h>
using namespace std;
#define int_max 999999999
int eggDrop(int n , int k){
    int arr[n+1][k+1];
    int res , x;

    for(int i=1 ; i<=n ; i++){
        arr[i][1] = 1;
        arr[i][0] = 0;
    }

    for(int j=1 ; j<=k ; j++){
        arr[1][j] = j;
    }

    for(int i=2 ; i<=n ; i++){
        for(int j = 2 ; j<=k ; j++){
            
            arr[i][j] = int_max;
            
            for(x = 1 ; x<=j ; x++){
                res = 1+ max(arr[i-1][x-1] , arr[i][j-x]);
                if(res < arr[i][j])
                    arr[i][j] = res;
            }

        }

    }
    return arr[n][k];
}

int main(){
    int n,k;
    cin>>n>>k;
    cout<<eggDrop(n,k)<<endl;
    
}