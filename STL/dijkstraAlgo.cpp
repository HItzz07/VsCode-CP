// #include<bits/stdc++.h>

// using namespace std;


// // Dijkstra
// // In the last part of this tutorial I’ll describe how to efficiently implement Dijktra’s algorithm in sparse graph using STL containers. Please look through this tutorial for information on Dijkstra’s algoritm.
// // Consider we have a weighted directed graph that is stored as vector< vector< pair<int,int> > > G, where
//     // G.size() is the number of vertices in our graph
//     // G[i].size() is the number of vertices directly reachable from vertex with index i
//     // G[i][j].first is the index of j-th vertex reachable from vertex i
//     // G[i][j].second is the length of the edge heading from vertex i to vertex G[i][j].first
//     // We assume this, as defined in the following two code snippets:
// typedef vector<int> vi;
// typedef pair< int,int > ii;
// typedef vector< ii > vii;
// typedef vector< vii > vvii;

// // Dijkstra via priority_queue

// int N;

// vi D(N, 987654321);
// // distance from start vertex to each vertex 

// priority_queue< ii,vector< ii >, greater< ii > > Q;
//     // priority_queue with reverse comparison operator,
//     // so top() will return the least distance
//     // initialize the start vertex, suppose it’s zero

//     D[0] = 0;
//     Q.push(ii(0,0)); 

//     // iterate while queue is not empty
//     while(!Q.empty()) { 

//     // fetch the nearest element
//     ii top = Q.top();
//     Q.pop(); 

//     // v is vertex index, d is the distance
//     int v = top.second, d = top.first; 

//     // this check is very important
//     // we analyze each vertex only once
//     // the other occurrences of it on queue (added earlier)
//     // will have greater distance
//     if(d <= D[v]) {
//     // iterate through all outcoming edges from v
//     tr(G[v], it) {
//     int v2 = it->first, cost = it->second;
//     if(D[v2] > D[v] + cost) {
//     // update distance if possible
//     D[v2] = D[v] + cost;
//     // add the vertex to queue
//     Q.push(ii(D[v2], v2));
//     }
//     }
//     }
//     }




//     I will not comment on the algorithm itself in this tutorial, but you should notice the priority_queue object definition. Normally, priority_queue will work, but the top() member function will return the largest element, not the smallest. Yes, one of the easy solutions I often use is just to store not distance but (-distance) in the first element of a pair. But if you want to implement it in the “proper” way, you need to reverse the comparison operation of priority_queue to reverse one. Comparison function is the third template parameter of priority_queue while the second paramerer is the storage type for container. So, you should write priority_queue< ii, vector, greater >.

// Dijkstra by set
// Petr gave me this idea when I asked him about efficient Dijkstra implementation in C#. While implementing Dijkstra we use the priority_queue to add elements to the “vertices being analyzed” queue in O(logN) and fetch in O(log N). But there is a container besides priority_queue that can provide us with this functionality – it’s ‘set’! I’ve experimented a lot and found that the performance of Dijkstra based on priority_queue and set is the same.

// So, here’s the code:

// vi D(N, 987654321); 

// // start vertex
// set< ii > Q;
// D[0] = 0;
// Q.insert(ii(0,0)); 

// while(!Q.empty()) { 

// // again, fetch the closest to start element
// // from “queue” organized via set
// ii top = *Q.begin();
// Q.erase(Q.begin());
// int v = top.second, d = top.first; 

// // here we do not need to check whether the distance
// // is perfect, because new vertices will always
// // add up in proper way in this implementation 

// tr(G[v], it) {
// int v2 = it->first, cost = it->second;
// if(D[v2] > D[v] + cost) {
// // this operation can not be done with priority_queue,
// // because it does not support DECREASE_KEY
// if(D[v2] != 987654321) {
// Q.erase(Q.find(ii(D[v2],v2)));
// }
// D[v2] = D[v] + cost;
// Q.insert(ii(D[v2], v2));
// }
// }
// }



// // I will not comment on the algorithm itself in this tutorial, but you should notice the priority_queue object definition. Normally, priority_queue will work, but the top() member function will return the largest element, not the smallest. Yes, one of the easy solutions I often use is just to store not distance but (-distance) in the first element of a pair. But if you want to implement it in the “proper” way, you need to reverse the comparison operation of priority_queue to reverse one. Comparison function is the third template parameter of priority_queue while the second paramerer is the storage type for container. So, you should write priority_queue< ii, vector, greater >.

// // Dijkstra by set
// // Petr gave me this idea when I asked him about efficient Dijkstra implementation in C#. While implementing Dijkstra we use the priority_queue to add elements to the “vertices being analyzed” queue in O(logN) and fetch in O(log N). But there is a container besides priority_queue that can provide us with this functionality – it’s ‘set’! I’ve experimented a lot and found that the performance of Dijkstra based on priority_queue and set is the same.
// // So, here’s the code:

//     vi D(N, 987654321); 

//     // start vertex
//     set< ii > Q;
//     D[0] = 0;
//     Q.insert(ii(0,0)); 

//     while(!Q.empty()) { 

//     // again, fetch the closest to start element
//     // from “queue” organized via set
//     ii top = *Q.begin();
//     Q.erase(Q.begin());
//     int v = top.second, d = top.first; 

//     // here we do not need to check whether the distance
//     // is perfect, because new vertices will always
//     // add up in proper way in this implementation 

//     tr(G[v], it) {
//     int v2 = it->first, cost = it->second;
//     if(D[v2] > D[v] + cost) {
//     // this operation can not be done with priority_queue,
//     // because it does not support DECREASE_KEY
//     if(D[v2] != 987654321) {
//     Q.erase(Q.find(ii(D[v2],v2)));
//     }
//     D[v2] = D[v] + cost;
//     Q.insert(ii(D[v2], v2));
//     }
//     }
//     }



// // One more important thing: STL’s priority_queue does not support the DECREASE_KEY operation. If you will need this operation, ‘set’ may be your best bet.
// // I’ve spent a lot of time to understand why the code that removes elements from queue (with set) works as fast as the first one.
// // These two implementations have the same complexity and work in the same time. Also, I’ve set up practical experiments and the performance is exactly the same (the difference is about ~%0.1 of time).
// // As for me, I prefer to implement Dijkstra via ‘set’ because with ‘set’ the logic is simpler to understand, and we don’t need to remember about ‘greater< int >’ predicate overriding.
