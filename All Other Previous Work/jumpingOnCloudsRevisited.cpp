#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k,e=100;
cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int x=0,y;

do{
    x=(x+k)%n;
    //cout<<x<<" "<<e<<endl;
    if(arr[x]==0){
        e-=1;
    }
    else{
        e-=3;
    }

}
while(x!=0);
cout<<e<<endl;
}