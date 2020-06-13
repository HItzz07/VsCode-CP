#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define mod 1000000007
#define fo(i,n)  for(int i=1;i<=n;i++)
int maxValue, maxNODE;
int vis[10001] , dist[10001];
vector <vector <int> > arr(10001);

void bfs(int src){
    queue <int> q;
    q.push(src);
    vis[src] = 1;
    dist[src] = 0;

    while(!q.empty()){
        int cur = q.front();
        q.pop();

        for(int child : arr[cur]){ 
            if(vis[child] == 0){
                q.push(child);
                dist[child] = dist[cur] + 1;
                vis[child] = 1; 
            }
        }
    }
}

int main(){
    
    int t,n,m,a,b;
    cin>>t;

    while(t--){
        cin>>n>>m;

        fo(i,n){
            arr[i].clear();
            vis[i] = 0;
        }

        while(m--){
            cin>>a>>b;
            arr[a].push_back(b);
            arr[b].push_back(a);
        }

        bfs(1); 

        cout<<dist[n]<<endl;


    }
}