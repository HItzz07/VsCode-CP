#include<bits/stdc++.h>
using namespace std;
bool vis[1001][1001];
int n,m;

bool isValid(int x , int y){
    if(x < 1 || x > n || y < 1 || y > m ) return false;
    if(vis[x][y] == true) return false;

    return true;
}

int dx[] = {-1 , 0  , 1 , 0};  //up right down left for x
int dy[] = {0 , 1  , 0 , -1};  //up right down left for y


void dfs(int x , int y){
    vis[x][y] = 1;
    cout<<x<<" "<<y<<'\n';

//we can reduce the lines of code by using this
    for(int i=0;i<4;i++)
        if(isValid(x + dx[i] , y+dy[i]))  dfs(x+dx[i] , y+dy[i]);

    // if(isValid(x-1 , y)) dfs(x-1 , y);
    // if(isValid(x , y+1)) dfs(x , y+1);
    // if(isValid(x , y-1)) dfs(x , y-1);
    // if(isValid(x+1 , y)) dfs(x+1 , y);
    
}

int main(){
    cin>>n>>m;
    dfs(1 , 1);
}