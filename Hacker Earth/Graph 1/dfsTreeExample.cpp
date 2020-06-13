#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int in[101] , vis[101] ,low[101] ;
vector <vector <int> > arr(101);
int timer;

void dfs(int node, int parent){
    vis[node] = 1;
    in[node] = low[node] = timer;
    timer++;

    for(int child : arr[node]){
        if(child == parent) continue;

        if(vis[child] == 1){ //if node is visited then it is back edge

            //edge node-child is a  back edge
            low[node] = min(low[node] , in[child]);

        }
        else{
            //edge node-child is a forward edge
            dfs(child , node);

            if(low[child] > in[node]){ ///is means that low time is not connected to any of its ancestors but is only connected to itd parent and must ne a bridge
                cout<<node<<" "<<child<<" is a bridge\n ";
            }

            low[node] = min(low[node] , low[child]);
        }
    }
}

int main(){
    
    int n,m,x,y;
    cin>>n>>m;
    
    while(m--){
        cin>>x>>y;
        arr[x].push_back(y) ; 
        arr[y].push_back(x) ; 
    }

    dfs(1,-1);  //-1 is assumed the parent of 1


}        