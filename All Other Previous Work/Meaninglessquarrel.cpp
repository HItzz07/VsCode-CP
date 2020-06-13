#include<bits/stdc++.h>
using namespace std;
 int main(){
 int n;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++){
     cin>>a[i];
 }
 int q;
 cin>>q;
 for(int i=0;i<q;i++){
    int l,r,x;
    cin>>l>>r>>x;
    for(int j=l-1;j<r;j++){
        a[j]=a[j]|x;
    }  
 }

for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}

 }
