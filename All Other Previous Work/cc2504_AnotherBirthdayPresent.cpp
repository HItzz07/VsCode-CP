#include<bits/stdc++.h>
using namespace std;

void Swap(int arr[],int k,int j);

int main(){

int t;
cin>>t;

for(int y=0;y<t;y++){
    int n,k;
    cin>>n>>k;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0 ; k+i <= n-1 ; i++){
        
            if(  arr[i]>arr[k+i]  ){
                Swap(arr,k,i);
            }
   
    }


    int error=0;

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
           //cout<<arr[i]<<" "<<arr[i+1];
            error = 1;
        }
    }

    if(error == 1){
        cout<<"no\n";
    }else{
        cout<<"yes\n";
    }

}
}

void Swap(int arr[] , int k,int j){
    
    arr[j] = arr[j]+arr[k+j];
    arr[k+j] = arr[j] - arr[k+j];
    arr[j]  = arr[j] - arr[k+j]; 
}