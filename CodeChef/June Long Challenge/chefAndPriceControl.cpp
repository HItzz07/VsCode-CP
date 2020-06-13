#include<bits/stdc++.h>
using namespace std;
 
 int main(){
     
     int t,n,k,temp,temp1;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int oSum= 0 ,nSum = 0;
        for(int i=0 ;i<n;i++){
            cin>>temp;

            if(temp > k) temp1 = k;
            else temp1 = temp;

            oSum += temp;
            nSum += temp1;
        }
        cout<<oSum - nSum<<'\n';
    }
 }