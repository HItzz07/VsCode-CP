#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    map <string , int> collector;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        collector[str]++;
    }
    
    for(auto it = collector.begin() ; it != collector.end() ; it++ ){
        cout<<it->first<<" "<<it->second<<endl;
    }
}