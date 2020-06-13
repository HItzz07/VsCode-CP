#include<bits/stdc++.h>
using namespace std; 
int main(){
    int t; cin>>t;
    string str;
    while(t--){
        cin>>str;
        int count  = 0;
        for(int i=0 ; i<str.size()-1 ; i++){
            if((str[i] == 'x' && str[i+1] == 'y') ||(str[i] == 'y' && str[i+1] == 'x')){
                count++;
                i++;
            }
        }
        cout<<count<<endl;
    }
}