//in tree we can reach to every other node from one node so
//1.Total no of connected components must be one
//2.Tree Does not contain any cycle , so no of cycles = 0
//3. n nodes , no of edges = n-1  -> cycle condition can be checked by no of edges 

#include<bits/stdc++.h>
using namespace std;
vector < vector <int > > v1(10001);
int vis[10001];

void dfs(int node){
    vis[node] = 1;

    for(int child : v1[node])
        if(!vis[child])
            dfs(child);
}

 int main(){
     int n,e,a,b;

     cin>>n>>e;

     for(int i = 1 ; i <= e ; i++){
         cin>>a>>b;
         v1[a].push_back(b);  v1[b].push_back(a);
     }

     int cc = 0;

     for(int i=1 ; i <= n ; i++){
         if(vis[i] == 0)
           {
            dfs(i);
            cc++;
           } 
               
     }

     if(cc == 1 && e == n-1) //here e-1 checks the presence of cycle
        cout<<"YES"<<'\n';

     else cout<<"NO"<<'\n';
       
 }