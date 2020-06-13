#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define mod 1000000007
int cc_size;
int vis[100001];
vector <vector <int> > arr(100001);
void dfs(int node){
    vis[node] = 1;
    cc_size++;   //no of nodes in  connected component
    for(int child: arr[node]){
        if(vis[child] == 0)
            dfs(child);
    }
}

int main(){
    int t , n ,m , a ,b ; 
    cin>>t;
    while(t--){
        cin>>n>>m;

        for(int i=1 ; i<=n ;i++) {
            vis[i] = 0;
            arr[i].clear();   //clearing the adjacency list
        }

        for(int i=1 ;i <=m ;i++){
            cin>>a>>b;
            arr[a].push_back(b) , arr[b].push_back(a); 
        }

        int count  = 0;
        lli res = 1;

        for(int i=1;i<=n ; i++){
            if(vis[i] == 0){
                cc_size = 0;
                dfs(i) , count++;        //here count is counting total no of connected componenets
                res = (res * cc_size) % mod;
            }
        }
        cout<<count<<" "<<res<<'\n';

    }
}