#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define mod 1000000007
int maxValue, maxNODE;
int vis[10001] ;
vector <vector <int> > arr(10001);

void dfs(int node , int dist){
    vis[node] = 1;

    if(dist > maxValue){
        maxValue = dist;
        maxNODE = node;
    }

    for(int child: arr[node]){
        if(vis[child] == 0)
            dfs(child , dist+1);    
    }
}

int main(){
    
    int n;
    cin>>n;
    for(int i=1 ; i <= n-1 ; i++ ){
        int a,b;
        cin>>a>>b;
        arr[a].push_back(b); arr[b].push_back(a);  
    }
    int maxNode;
    maxValue = -1;
    
    dfs(1,0); //in tree one dfs will traverse all the nodes
    maxValue = -1;
    for(int i=1 ;i<=n ;i++){
        vis[i] = 0;
    }

    dfs(maxNODE , 0);  //running dfs from maxNODE to find the diameter

    cout<<maxValue<<endl;
}