#include<bits/stdc++.h>
using namespace std;

vector < vector <int> > v1(100001);
vector <int> vis(100001 , 0);

void dfs(int node){
        vis[node] = 1;

        for(int child : v1[node]){
            if(!vis[child]){
                dfs(child);
            }
        }
}

int main(){
    int n,e,a,b;
    cin>>n>>e;


    for(int i=0 ; i < e ; i++){
        cin>>a>>b;
        v1[a].push_back(b);  v1[b].push_back(a);    
    }

    int cc = 0;


    for(int i=1 ; i <= n ; i++){
        if(!vis[i]){
            dfs(i);   //one dfs call for connected components is enough to visit all nodes
            cc++;
        }
    }

    cout<<cc<<endl;
}
