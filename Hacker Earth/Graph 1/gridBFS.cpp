#include<bits/stdc++.h>
using namespace std;
bool vis[1001][1001];
int dist[1001][1001];
int n,m;

bool isValid(int x , int y){
    if(x < 1 || x > n || y < 1 || y > m ) return false;
    if(vis[x][y] == true) return false;

    return true;
}

int dx[] = {-1 , 0  , 1 , 0};  //up right down left for x
int dy[] = {0 , 1  , 0 , -1};  //up right down left for y


void bfs(int srcX , int srcY){
    queue < pair<int , int> > q;
    
    q.push({srcX , srcY});
    dist[srcX][srcY] = 0;
    vis[srcX][srcY] = 1;

    while(!q.empty()){
        int curX = q.front().first;
        int curY = q.front().second;
        q.pop();

        for(int i=0;i<4;i++){
            if(isValid(curX+dx[i] , curY+dy[i])){
                int newX = curX+dx[i];
                int newY = curY+dy[i];
                
                q.push({newX , newY});
                vis[newX][newY] = 1;
                dist[newX][newY] = dist[curX][curY]+1;
            }
        }
    }
    cout<<"DIstance Array:-\n";
            for(int i=1 ;i<=n;i++){
        for(int j=1 ;j<=m;j++){
            cout<<dist[i][j]<<" ";   
        }
            cout<<endl;
    }

}

int main(){
    int x,y; //source cell
    cin>>n>>m;
    cin>>x>>y;
    bfs(x , y);

}