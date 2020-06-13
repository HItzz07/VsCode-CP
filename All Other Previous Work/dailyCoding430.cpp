#include<bits/stdc++.h>
#include<string.h>
using namespace std;
 
int main(){
    string str;
    cin>>str;
    int l=0,r=0;
    int i=0;
    while(str[i]){
        if(str[i] == '('){
            l++;
        }
        else if(str[i] == ')'){
            r++;
        }
        else{
            cout<<"Wrong input";
            break;
        }
        i++;
    }

    if(l!=r){
        if(l<r){
            int j=0;
            while(j<r){
                cout<<"()";
                j++;
            }
        }
        else if(l>r){
            int j=0;
            while(j<l){
                cout<<"()";
                j++;
            }
        }

    }
    else{
        int j=0;
        while(j<l){
            cout<<"()";
            j++;
        }    
    }

} 