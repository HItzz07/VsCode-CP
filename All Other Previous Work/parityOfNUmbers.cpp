#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n],j=0;
for(int i=0;i<n;i++){
    unsigned int t,count=0;
    cin>>t;
    int p;
    while(t!=0){
        if((t%2==1)){
            count++;
        }
        t=t/2;
    }
    if(count%2==0){
        cout<<"0"<<endl;
    }
    else{
        cout<<"1"<<endl;
    }
  
}
}

    
    
    



