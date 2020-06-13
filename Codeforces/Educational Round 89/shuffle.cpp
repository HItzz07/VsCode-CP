// https://www.youtube.com/watch?v=kuO_Cfe_i-Y

#include<bits/stdc++.h>
using namespace std;
 int main(){
     int t,n,x,m,l,r,l1,r1;
    cin>>t;
    while(t--){
        cin>>n>>x>>m;

        l=x,r=x;
        int sum=0;
        while(m--){
            cin>>l1>>r1;
            if(r < l1 || l > r1)continue;
            else{
                l = min(l,l1);
                r = max(r,r1); 
            }
        }
        cout<<r-l+1<<endl;
        }
 }