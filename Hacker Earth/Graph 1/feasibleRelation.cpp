#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int vis[1000001] ,cc[1000001];
vector <vector <int> > arr(1000001);
int cur_cc;

void dfs(int node ){
    vis[node] = 1;
    cc[node] = cur_cc;

    for(int child: arr[node]){
        if(vis[child] == 0){
            dfs(child);
        }
    }

}

int main(){
    
    int t,n,m,a,b;
    string op;
    cin>>t;
    while(t--){
        cin>>n>>m;
        cur_cc = 0;
        vector < pair <int , int > > edgeList;
        for(int i=1 ; i<=n ; i++)
            arr[i].clear(), vis[i] = 0;

        for(int i=1 ; i <= m ; i++ ){
            cin>>a>>op>>b;
            if(op == "=")
                arr[a].push_back(b), arr[b].push_back(a);

            else{
                edgeList.push_back({a,b});  //pushing a pair
            }      
        }

        for(int i=1;i<=n;i++){
            if(vis[i] == 0){
                cur_cc++;
                dfs(i);
            }
        }

        bool flag = true;
        for(int i=0 ; i<edgeList.size() ; i++){
            a = edgeList[i].first;
            b = edgeList[i].second;

            if(cc[a] == cc[b]){  // a single node cannot be present in more than one  cc and if present then the condition does not hold
                flag  = false;
                break;
            }
        }

        if(flag)  cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
}