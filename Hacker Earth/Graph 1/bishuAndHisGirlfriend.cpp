#include<bits/stdc++.h>
using namespace std;
vector < vector<int> > v1(1001);
vector <int> vis(1001 , 0) , dist(1001);


void dfs(int node , int d){
    vis[node] = 1;
    dist[node] = d;

    for(int child : v1[node] ){
        if(!vis[child]){
            dfs( child , d + 1);
        }
    }
}


int main(){
    int n , g , a , b;
    cin>>n;

    for(int i = 1 ; i <= n-1 ; i++ ){ ///no of nodes = n and there is only one connected component so no of edged is n-1
        cin>>a>>b;
        v1[a].push_back(b);  v1[b].push_back(a);
    }

    dfs(1, 0 );  //1 is the node where bishu is present


    cin>>g;
    int min = 999999999;
    int ans = 0;
    while(g--){
        int gCity;
        cin>>gCity;

        if(dist[gCity] < min) min = dist[gCity] , ans = gCity;

        else if(dist[gCity] == min  && gCity < ans) min = dist[gCity] , ans = gCity; 
    }

    cout<<ans<<'\n';

 }