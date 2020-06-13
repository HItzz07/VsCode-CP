// https://www.youtube.com/watch?v=yDdzbZhSYD0
#include<bits/stdc++.h>
using  namespace std;

int main(){
    int t;
     cin>>t;
     while(t--){
         int c1=0,c0=0;
         string str;
         cin>>str;

         for(int i=0 ; i< str.size() ;i++){
             if(str[i] == '1') c1++;
             else c0++;
         }   

         int ans = min(c1 , c0);
         int p1=0,p0=0;
         for(int i=0;i<str.size() ; i++)
         {
             if(str[i] == '1')  p1++;
             else p0++;

             ans = min(ans , p0 + c1-p1); 
             ans = min(ans , p1 + c0-p0); 

         }
         cout<<ans<<endl;

    }
}