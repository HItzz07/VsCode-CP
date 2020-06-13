#include<bits/stdc++.h>
using namespace std;
 int main(){
 int f,o;
 cin>>f>>o;
 int adam[f][2],players[o][2];
 for(int i=0;i<f;i++){
     for(int j=0;j<2;j++){
     cin>>f[i][j];
     }
 }
 for(int i=0;i<f;i++){
     for(int j=0;j<2;j++){
     cin>>o[i][j];
     }
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
