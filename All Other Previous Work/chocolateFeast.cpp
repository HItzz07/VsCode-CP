#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int  n,c,m;
        cin>>n>>c>>m;
        int sum=n/c;
        int q,r;
        n=sum;
        while(n>=m){
            q = n/m;
            r = n%m;
            sum+=q;
            n=q+r;
        }       
        cout<<sum<<endl;
    }
}