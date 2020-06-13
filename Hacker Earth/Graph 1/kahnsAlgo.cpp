#include<bits/stdc++.h>
using namespace std;
vector < vector< int > > arr(101);
vector <int> resSort,in(101);

void kahn(int n){
    queue<int> q;

    for(int i=1 ; i<=n ; i++){
        if(in[i] == 0) q.push(i);
    }

    while(!q.empty()){
        int cur = q.front();
        resSort.push_back(cur);

        q.pop();

        for(int node :arr[cur]){
            in[node]--;
            if(in[node] == 0)
                q.push(node);
        }  
    }

    cout<<"Top Sort:";
    for(int node : resSort){
        cout<<node<<" ";
    }
}

int main(){
    int n,m,a,b;
    cin>>n>>m;

    for(int i=1 ; i<=m ;i++){
        cin>>a>>b;
        arr[a].push_back(b); // we are adding b in adj list of a becaue it is a directed graph where a->b 
        in[b]++;     //increasing the indegree of b
    }

    kahn(n);

    
}