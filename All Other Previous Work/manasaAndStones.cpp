#include<bits/stdc++.h>
using namespace std;

int main(){
int t,i,j,k;
cin>>t;
for(int y=0;y<t;y++){
    int n,a,b;
    cin>>n>>a>>b;
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    int  arr[n+1][n],sum[n+1];
    for( k=0;k<=n;k++){
        for(i=0;i<n-k;i++){
            arr[k][i]=a;
        }
        
        for(j=n-k;j<n;j++){
            arr[k][j]=b;
        }
        sum[k]=0;
    }
    
    for(i=0;i<n+1;i++){
            for(j=1;j<n;j++){
                //cout<<arr[i][j]<<" ";
                sum[i]+=arr[i][j];
            }
          }
    
    
    if(a == b){
        cout<<sum[0];
    }
    else{
        for(j=0;j<n;j++){
         cout<<sum[j]<<" ";
        }

    } 

    cout<<endl;
}
}