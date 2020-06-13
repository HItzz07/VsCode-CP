#include<bits/stdc++.h>
using namespace std;
 
 struct edge{
     int a;
     int b;
     int w;
 };

 edge arr[100001];
 int R[10001];
 int par[10001];  //required in disjoint set

 bool comp(edge a , edge b){ //if true then a<b else a>b
    if(a.w < b.w) return true;    //here a < b
    
    return false;
 }

 int find(int a){
     if(par[a] == -1) return a;

     return par[a] = find(par[a]); //here we are applying path compression
 }


void merge(int a, int b){
    if(R[a] > R[b]) {
        //a---->parent
        par[b] = a;
        R[a] += R[b];
    }
    else{
        //b---->parent
        par[a] = b;
        R[b] += R[a];
        
    }
    }

 int main(){
     int n,m,a,b,w;
     cin>>n>>m;

     for(int i=1 ; i<=n ;i++) par[i] = -1 , R[i] = 1;   

     for(int i=0 ; i<m;i++){
         cin>>arr[i].a>>arr[i].b>>arr[i].w;
     }
        int sum = 0;
     sort(arr , arr+m , comp); //comp is comparator function used for comparing values while sorting

    for(int i=0;i<m;i++){
        a = find(arr[i].a);
        b = find(arr[i].b);

        if(a!=b){
            sum += arr[i].w;
            merge(a,b);
        }
    }

    cout<<sum<<endl;    
 
 }