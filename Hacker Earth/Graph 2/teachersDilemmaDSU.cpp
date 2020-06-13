// https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/teachers-dilemma-3/description/

#include<bits/stdc++.h>
using namespace std;
int par[100001];

int find(int n){
    if(par[n] < 0) return n;
    return par[n] = find(par[n]);
}

void merge(int a , int b){
    par[a] += par[b];
    par[b] = a;
}

int main(){
    int n,m,u,v,a,b;
    cin>>n>>m;

    for(int i=1 ;i<=n;i++) par[i] = -1;
    while(m--){
        cin>>u>>v;
        //here u & v are v--->u
        u = find(u);
        v = find(v);

        if(u != v) merge(u , v);
    }

    long long int prod=1;
    
    for(int i=1 ;i<=n;i++){
        if(par[i] < 0) prod  = (prod * par[i]*(-1)) % 1000000007;  //this mod is important in some cases so in case you are not getting ans please use this
    }

    cout<<prod<<endl;
}