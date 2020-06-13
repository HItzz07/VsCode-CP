#include<bits/stdc++.h>
using namespace std;

int main(){
    //char alpha[27]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string alpha="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int num,quo,remain;
    cout<<"Enter the position (Notice:-The Numbering has been started from 1):-";
    cin>>num;
    num=num-1;
    quo=num/26;
    remain=num%26;
    char res[quo+1];

    //cout<<alpha[25];
    if(quo==0){
            cout<<alpha[remain];}
    else{
        for(int i=0;i<quo;i++){
                res[i]=alpha[0];
            }
            res[quo]=alpha[remain];

    }
    for(int i=0;i<=quo;i++){
         cout<<res[i];
            }
     
     
    
}
