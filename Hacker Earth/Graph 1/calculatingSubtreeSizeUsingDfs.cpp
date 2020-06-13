#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define mod 1000000007
int maxValue, maxNODE;
int vis[10001] , subSize[10001];
vector <vector <int> > arr(10001);

int dfs(int node){
    vis[node] = 1;
    int size = 1;
    
    for(int child: arr[node]){
        if(vis[child] == 0)
            size += dfs(child);    
        }
    subSize[node] = size;        
    return size;
    }

int main(){
    
    int n;
    cin>>n;
    for(int i=1 ; i <= n-1 ; i++ ){
        int a,b;
        cin>>a>>b;
        arr[a].push_back(b); arr[b].push_back(a);  
    }
    int sizee =  dfs(1); //in tree one dfs will traverse all the nodes here root node is 1

    for(int i=1;i<=n;i++) cout<<subSize[i]<<" ";
}