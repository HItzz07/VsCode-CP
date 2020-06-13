#include<bits/stdc++.h>
using namespace std;
vector < vector< int > > arr(100001);
int vis[100001],low[100001],in[100001];
set<int >AP;
int timer;


void dfs(int node , int parent){
    vis[node] = 1;
    in[node] = low[node] = timer++;
    int child_cnt = 0; //to count total no of subtrees in a tree

    for(int child : arr[node]){
        if(child == parent) continue;

        if(vis[child] == 1){
            low[node] = min(low[node] , in[child] );
        }

        else{
            dfs(child , node);
            child_cnt++;
            low[node] = min(low[node] , low[child]);

            if(in[node] <= low[child] && parent != -1){
                AP.insert(node);
            }
        }
    }
    if(parent == -1 && child_cnt >1)
        AP.insert(node);
}

int main(){
    int n,m,a,b;

    while(1){
        cin>>n>>m;

        if(n == 0 && m == 0) break;

        for(int i=1 ; i <= n ; i++){
            arr[i].clear();
            vis[i] = 0;
        }
            AP.clear();
            timer = 1;

        for(int i=1;i<=m;i++){
            cin>>a>>b;
            arr[a].push_back(b);
            arr[b].push_back(a);
        }    


        for(int i=1 ;i<=n;i++){
            if(vis[i] == 0) dfs(i,-1);
        }

        cout<<AP.size()<<endl;
    }
}