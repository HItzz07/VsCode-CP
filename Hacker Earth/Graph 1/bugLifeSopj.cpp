// https://www.spoj.com/problems/BUGLIFE/
#include<bits/stdc++.h>
using namespace std;

vector < vector<int> > arr(2001);
int vis[2001] , col[2001];

bool dfs(int node , int color){
    vis[node] = 1;
    col[node] = color;

    for(int child : arr[node]){ 

        if(vis[child] == 0){         //if child is not visited we visit it and traverse its child node  
            bool res = dfs(child , color ^ 1);
            if(res == false) return false;
        }
        else{        //if child is visited we check the color of the child and its node
            if(col[node] ==  col[child])
                return false;   
        }
    }
    //if it reaches here means graph has executed successfully and hence is bipartite 
    return true;
}
int main(){

int t;
 cin>>t;
 for(int tc = 1 ; tc <=t ; tc++){
     int n,m;
     cin>>n>>m;

     for(int i=1;i<=n;i++){ //clearing data of last test case
         arr[i].clear();
         vis[i] = 0;
     }
    int a,b;
    for(int i=1;i<=m;i++){
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a); 
    }

    bool flag = true;

    for(int i=1 ; i<=n ; i++){
        if(vis[i] == 0){
            bool res = dfs(i , 0);   //here dfs checks whether given graph is bipartite or not
            if(res == false)
                flag = false;
        }
    }
    cout<<"Scenario #"<<tc<<":"<<'\n';

    if(flag == false){
        cout<<"Suspicious bugs found!"<<'\n';
    }

    else cout<<"No suspicious bugs found!"<<'\n';
 }  
 return 0;
}