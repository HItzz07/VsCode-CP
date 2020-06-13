#include<bits/stdc++.h>

using namespace std;

typedef vector< int > vi;
typedef vector< vi > vvi;


int N;   //no of vertices
vvi W;      //graph
vi V;       //V is visited flag


void dfs(int i){
    if(!V[i]){
        V[i] = true;
        for_each(W.begin() , W.end() , dfs);  //here using for_each function  //also for (auto number : numbers)
    }
}

bool check_graph_connected_dfs(){

    int start_vertex = 0;
    V = vi(N,false);  //creating vector of size N and filling it with zeroes(false)
    dfs(start_vertex);
    return (find(V.begin() , V.end() , 0) == V.end());
}


int main(){
    
    bool a = check_graph_connected_dfs();
      
}


// Breadth-first search (BFS)
// Again, if you are not familiar with the BFS algorithm, please refer back to this Topcoder tutorial first. Queue is very convenient to use in BFS, as shown below:

// /*
// Graph is considered to be stored as adjacent vertices list.
// Also we considered graph undirected. 

// vvi is vector< vector< int > >
// W[v] is the list of vertices adjacent to v
// */ 

// int N; // number of vertices
// vvi W; // lists of adjacent vertices 

// bool check_graph_connected_bfs() {
// int start_vertex = 0;
// vi V(N, false);
// queue< int > Q;
// Q.push(start_vertex);
// V[start_vertex] = true;
// while(!Q.empty()) {
// int i = Q.front();
// // get the tail element from queue
// Q.pop();
// tr(W[i], it) {
// if(!V[*it]) {
// V[*it] = true;
// Q.push(*it);
// }
// }
// }
// return (find(all(V), 0) == V.end());
// }





// pair< pair< int,int >, pair< string, vector < pair< int, int > > > > 

// (this case is quite usual: complex data structure may define the position in
// some game, Rubik’s cube situation, etc…)

// Consider we know that the path we are looking for is quite short, and the total number of positions is also small. If all edges of this graph have the same length of 1, we could use BFS to find a way in this graph. A section of pseudo-code follows:

// // Some very hard data structure
// typedef pair< pair< int,int >, pair< string, vector< pair< int, int > > > > POS;
// // … 

// int find_shortest_path_length(POS start, POS finish) { 

// map< POS, int > D;
// // shortest path length to this position
// queue< POS > Q; 

// D[start] = 0; // start from here
// Q.push(start); 

// while(!Q.empty()) {
// POS current = Q.front();
// // Peek the front element
// Q.pop(); // remove it from queue 

// int current_length = D[current]; 

// if(current == finish) {
// return D[current];
// // shortest path is found, return its length
// } 

// tr(all possible paths from ‘current’, it) {
// if(!D.count(*it)) {
// // same as if(D.find(*it) == D.end), see Part I
// // This location was not visited yet
// D[*it] = current_length + 1;
// }
// }
// }
// // Path was not found
// return -1;
// }
// // …