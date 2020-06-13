#include<bits/stdc++.h>
using namespace std;
#define INF 1000000000

vector < vector < pair <int , int> > > arr(1001);


//Pay attention here 
//we are inserting in  arr as {node , weight}   , but we are inserting into pq as {weight , node}

int main(){

    int n,m,a,b,w;
    cin>>n>>m;

    while(m--){
        cin>>a>>b>>w;
        arr[a].push_back({b , w});   //it means a is connected to b and weight of the edge is w
        arr[b].push_back({a , w});   //this line won't be there in case of directed graph
    }

    //this creates the min heap  such that min value will be at the back
    priority_queue < pair<int , int> , vector < pair<int , int> >  , greater< pair<int , int > > > pq;

    vector <int> dist(n+1 , INF);  //initializing the dist array with INF value

    pq.push({0,1});   //taking 1  as source node and its dist 0 adn pushing them into the pq 
    dist[1] = 0;

    while(!pq.empty()){

        int cur  = pq.top().second; //the node 
        int cur_d = pq.top().first;  // the distance of that node

        pq.pop();

        for(pair<int ,int > edge : arr[cur]){

            if(cur_d + edge.second < dist[edge.first]){

                dist[edge.first] = cur_d + edge.second;
                pq.push({dist[edge.first] , edge.first});
            }
        }
    }  

    for(int i=1 ;i<=n;i++){
        cout<<dist[i]<<" ";
    }
}