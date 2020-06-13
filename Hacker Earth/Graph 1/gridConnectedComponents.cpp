#include<bits/stdc++.h>
using namespace std;
bool vis[1001][1001];
int arr[1001][1001];
int n,m;

bool isValid(int x , int y){
    if(x < 1 || x > n || y < 1 || y > m ) return false;
    if(vis[x][y] == true || arr[x][y] == 0) return false;

    return true;
}

int dx[] = {-1 , 0  , 1 , 0};  //up right down left for x
int dy[] = {0 , 1  , 0 , -1};  //up right down left for y


void dfs(int x , int y){
    vis[x][y] = 1;

    //we can reduce the lines of code by using this
    for(int i=0;i<4;i++)
        if(isValid(x + dx[i] , y+dy[i]))  dfs(x+dx[i] , y+dy[i]);
}

int main(){
    cin>>n>>m;

    for(int i=1;i<=n;i++){
        for(int j=1 ; j<=m ; j++)
            cin>>arr[i][j];
    }
    
    int cc = 0;
    
    for(int i=1;i<=n;i++){
        for(int j=1 ; j<=m ; j++){
            if(vis[i][j] == 0 && arr[i][j] == 1)
                dfs(i , j) , cc++;
        }
    }

    cout<<"CC "<<cc<<endl;
        

}