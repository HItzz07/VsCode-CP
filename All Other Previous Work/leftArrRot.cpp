#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,d,z,t=0;
    cin>>n>>d;
    z=n/2;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(d%n==0){
        for(int i=0;i<n;i++)
            cout<<arr[i]<<"\t";
    }
    else{
        d=d%n;
        if(d<=z){
            for(int j=0;j<d;j++){
                    
                t=arr[0];
                for(int i=0;i<n-1;i++){
                    arr[i]=arr[i+1];
                }
                arr[n-1]=t;
        }
        }
        else{
            d=n-d;
            for(int j=0;j<d;j++){
                    
                t=arr[n-1];
                for(int i=n-1;i>0;i--){
                    arr[i]=arr[i-1];
                }
                arr[0]=t;
        }

        }
        for(int i=0;i<n;i++)
            cout<<arr[i]<<"\t";
    }
}