#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int in[100001] , vis[100001] ,low[100001] ;
vector <vector <int> > arr(100001);
vector < pair <int , int> > edgeList;
int timer;
bool hasBridge; //initialized with 0 aka false as it is is defined globally

void dfs(int node, int parent){
    vis[node] = 1;
    in[node] = low[node] = timer;
    timer++;

    for(int child : arr[node]){
        if(child == parent) continue;

        if(vis[child] == 1){  //it means that edge connecting node and child is a back edge
            low[node] = min(low[node] , in[child]);
            if(in[node] > in[child]){  //backEdge holds this condition here node is the later node and child is its ancestor
                edgeList.push_back({node , child});
            }
        }
        else{
            dfs(child , node);

            if( low[child] > in[node] ){
                hasBridge = true;
                return;
            }

            edgeList.push_back({node , child}); //inserting the forward edge into the edgeList
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

    cout<<hasBridge<<endl;

    if(hasBridge) cout<<"0\n";

    else {
        for(pair <int , int> e : edgeList ){
            cout<<e.first<<" "<<e.second<<endl;
        }
    }


}        