#include<bits/stdc++.h>
using namespace std;

int main(){
    char charArr[27];

    for(int i=1;i<27;i++){
        charArr[i]=char(97+i-1);
    }

    // for(int i=1;i<27;i++){
    //     cout<<charArr[i]<<" ";
    // }

    string code;
    cin>>code;

    int j=0;
    while(code[j]){
        int convert;
        convert = (int)code[j] - 48;
        code[j]=charArr[convert];
        // cout<<convert<<endl;
        j++;
    }

    cout<<code;


}