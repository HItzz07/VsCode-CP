#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,m,p=0,count=0;
        cin>>n;
        m=n;
        while(m!=0){
            cout<<m<<endl;
        p=m%10;
        if(p==0){
             m=m/10;
            continue;}
        else if(p==1){count++;}
        else if(n%p==0){count++;}
        m=m/10;
        
        }
        cout<<count<<endl;
    }
}