#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int  i = 0 ; i < n ; i++ )
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    
    int temp = -123456789;
    int count = 0;

    fo(i,n){
        if(arr[i] > temp)
            { 
                cout<<arr[i]<<" ";
                count++;
                temp = arr[i];
            }    
    }

    cout<<count;
}