#include<bits/stdc++.h>
using namespace std;

// bool haveAcquaintance(bool a ){
//     if(a) return true;
// }
int main(){
    int n;
    cin>>n;

    vector <int> inDegree(n,0) , outDegree(n,0);
    
    bool knows[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>knows[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
            if(knows[i][j] == 1){
                outDegree[i]++;
                inDegree[j]++;
            }        
        }
    }
    int isTrue = 0;

    for(int i=0;i<n;i++){
        if((inDegree[i] == (n-1)) && outDegree[i] == 0){
            cout<<i<<endl;
            isTrue = 1;
            break;
        }
    }

    if(!isTrue ){
        cout<<"No Celebrity Present"<<'\n';
    }


}