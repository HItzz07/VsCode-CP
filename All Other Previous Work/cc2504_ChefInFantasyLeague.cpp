#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;

for(int y=0;y<t;y++){
    int n,s;
    cin>>n>>s;
    int players[n],playerType[n];
    for(int i=0;i<n;i++){
        cin>>players[i];
    }
    for(int i=0;i<n;i++){
        cin>>playerType[i];
    }

    int min0D=200,min1F=200;

    for(int i=0;i<n;i++){
        if(playerType[i] == 0){
            if(players[i]<min0D){
                min0D = players[i];
            }
        }
        else if(playerType[i] == 1){
            if(players[i]<min1F){
                min1F = players[i];
            }
        }
    }

    if( (min0D+min1F) <=  (100-s)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no\n";
    }
}
}