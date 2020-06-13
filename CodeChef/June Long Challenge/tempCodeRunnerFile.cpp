#include<bits/stdc++.h>
using namespace std;
 
 int main(){
     int t;
     long long int ts,temp;
     cin>>t;
     while(t--){
         cin>>ts;
          if(ts % 2 == 0){
             while(ts % 2 == 0)  ts = ts>>1;

             if(ts <= 1) temp = 0;
             else{
                 temp = (ts-1)/2;
             }
         }     
         else temp = (ts-1)/2;
           
         cout<<temp<<'\n';
     }
 }