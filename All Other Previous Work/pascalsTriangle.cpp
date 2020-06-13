#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0;
    cin>>n;
int  arr1[n],arr2[n];
for(int i=0 ; i<n;i++ ){
    arr1[i]=0;arr2[i] = 0;
}
arr1[0]=1;   
arr1[1]=2;   
arr1[2]=1;   

int s=3,turn=0;
cout<<"1"<<endl;
cout<<"1"<<" "<<"2"<<" "<<"1"<<endl;

while(s!=n){
    int y=1;
    if(turn == 0){
        for(int i=0;i<n;i++)
            arr2[i]=0;
        
        arr2[0]=1;
        arr2[s]=1;

        while(arr2[y] != 1){
            arr2[y] = arr1[y-1] + arr1[y];
            y++;
        }
        
        s++;
        turn=1;

        for(int i=0;i<s;i++){
            cout<<arr2[i]<<" ";
        }
        cout<<endl;
    }
    else{
        for(int i=0;i<n;i++)
            arr1[i]=0;
        
        arr1[0]=1;
        arr1[s]=1;

        while(arr1[y] != 1){
            arr1[y] = arr2[y-1] + arr2[y];
            y++;
        }
        
        s++;
        turn=0;
        for(int i=0;i<s;i++){
            cout<<arr1[i]<<" ";
        }
        cout<<endl;
    }
}



}
