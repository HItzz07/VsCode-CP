#include<bits/stdc++.h>
using namespace std;
struct edge {
    int a; int b; int w;
};

edge arr[1000001];
int R[10001];
int par[10001]; 

bool comp(edge a , edge b){
    return (a.w < b.w);
}

int find(int a){
    if(par[a] == -1) return a;
    return par[a] = find(par[a]);
}

void merge(int a , int b){
        if(R[a] > R[b]){
            par[b] = a;
            R[a]+=R[b];
        }
        else{
            par[a] = b;
            R[b] += R[a];    
        }
}

int main(){
    int v,e,a,b,w;
    cin>>v>>e;

    for(int i=1;i<=v;i++) par[i] = -1, R[i] = 1;

    for(int i=0;i<e;i++){
        cin>>arr[i].a>>arr[i].b>>arr[i].w;
    }

    int sum = 0;
    sort(arr , arr+e , comp);
    
    for(int i = 0 ; i < e ; i++ ){
        a = find(arr[i].a);
        b = find(arr[i].b);

        if(a != b){
            sum += arr[i].w ;
            merge(a,b);
        }
    }
    cout<<sum<<endl;
}