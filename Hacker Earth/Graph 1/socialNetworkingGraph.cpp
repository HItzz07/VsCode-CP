#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int vis[1000001] ,level[1000001]; //level will store how many nodes are present at the that level
int dist[1000001] ;
vector <vector <int> > arr(1000001);
int cur_cc;

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = 1;
    dist[src] = 0;

    while(!q.empty()){
        int cur_node = q.front();
        q.pop();

        for(int child : arr[cur_node]){
            if(vis[child] == 0){
                dist[child] = dist[cur_node] + 1;
                q.push(child);
                vis[child]  = 1;
                level[dist[child]]++;
            }
        }
    }


}

int main(){
    
    int n,e,u,v,m,s,t;
    cin>>n>>e;
    for(int i = 0 ; i < e ; i++){
        cin>>u>>v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }

    cin>>m;

    while(m--){
        cin>>s>>t;
        for(int i=0 ; i <=n ; i++){
            level[i] = 0;  //nodes are o based indexed given in the question itself
            vis[i] = 0; 
        }
            bfs(s);
            cout<<level[t]<<'\n'; 
    }
}        