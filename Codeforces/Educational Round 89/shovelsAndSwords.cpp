#include<bits/stdc++.h>
using namespace std;
 int main(){
     int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a ==0 || b== 0) cout<<0<<'\n';
        else if(b <= a/2) cout<<b<<endl;
        else if(a <= b/2) cout<<a<<endl;
        else cout<<((a+b)/3)<<'\n';
        }
 }