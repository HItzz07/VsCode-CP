#include<bits/stdc++.h>
using namespace std;
 int main(){
     int p,q,r=0,n;
     cin>>n;
     p=n/10;

     while(p>0){
         int sum=0;
         while(n>0){
             q = n%10;
             sum += q;
             n = n/10;
            // cout<<sum<<endl;
         }
         n=sum;
         p=n/10;
         r=1;
     }

     if(r == 1)   
        cout<<n<<endl;
    else
        cout<<n<<endl;
    
 }