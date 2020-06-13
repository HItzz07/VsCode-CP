#include<bits/stdc++.h>
using namespace std;
vector < vector < int >  > arr(10001);
int in[10001];
vector <int > res;

 bool kahn(int n){
     priority_queue <int  , vector<int>  , greater<int > > pq; //this is the min heap , the normal queue created is max heap ie it contains max at the top
    for(int i=1;i<=n;i++){
        if(in[i] == 0) pq.push(i);
    }

    while(!pq.empty()){
        int cur = pq.top();
        res.push_back(cur);
        pq.pop();

        for(int child : arr[cur]){
            in[child]--;
            if(in[child] == 0){
                pq.push(child);
            }
        }
    }
    return res.size() == n; //for a correct totological sort all elements must be in result of sort
 }

 int main(){
     int n,m,a,b;
     cin>>n>>m;

     while(m--){
         cin>>a>>b;
         arr[a].push_back(b);
         in[b]++;
     }

     if(!kahn(n)){
         cout<<"Sandro fails.\n";
     }

     else{
         for(int node : res)
             cout<<node<<" "; 
     }
     cout<<endl;
 }