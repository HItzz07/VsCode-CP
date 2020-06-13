#include<bits/stdc++.h>
using namespace std;
const int maxN = 10;
int LCA[1001][maxN+1];  //it contains parent of nodes at position 2^{0,1,2,3....10};
vector <  vector<int> > arr(1001);
int lev[1001];


int lca(int a , int b){
    if(lev[a] > lev[b]) swap(a,b);
    int d = lev[b] - lev[a];

    while(d > 0){
        int i = log2(d);
        b = LCA[b][i];
        d -= (1<<i);
    }

    if(a == b) return a;

    for(int i=maxN ; i >= 0 ; i--){
        if((LCA[a][i] != -1) && (LCA[a][i] != LCA[b][i]) )
        {
            a = LCA[a][i];
            b = LCA[b][i];
        }
    }
    return LCA[a][0];
}

int getDist(int a ,int b){
    int lc = lca(a , b);

    return lev[a] + lev[b] - 2*lev[lc];
}

void dfs(int node ,int lvl, int par){
    lev[node] = lvl;
    LCA[node][0] = par;

    for(int child : arr[node]){
        if(child != par)
            dfs(child , lvl+1 , node);
    }
}

void init(int n){
    dfs(1 , 0 , -1);

    for(int i=1 ; i<=maxN ; i++){
        for(int j=1 ;j<=n;j++){
            if(LCA[j][i-1] != -1)  //its parent exists  otherwise it means that it is the parent
            {   
                int par = LCA[j][i-1];
                LCA[j][i] = LCA[par][i-1]; 
            }
        }
    }
}


int main(){
    int n,m,u,v,a,b;
    cin>>n;

    for(int i=1 ;i<=n;i++) 
        for(int j=1 ;j<=m;j++)
            LCA[i][j] = -1;
    

    for(int i=1;i<=n-1;i++){
        cin>>u>>v;
        arr[u].push_back(v) ;
        arr[v].push_back(u) ;   
    }    

    init(n);

    int q;
    cin>>q;
    while(q--){
        cin>>a>>b;
        cout<<getDist(a,b)<<endl;
    }
}