#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define mod 1000000007
#define fo(i,n)  for(int i=1;i<=n;i++)
#define vi vector <int>
#define vvi vector < vi >

int maxValue, maxNODE;
int vis[100001] , dist[100001];
vector <vector <int> > arr(100001);
vi primes;

void bfs(int src){
    queue <int> q;
    q.push(src);
    vis[src] = 1;
    dist[src] = 0;

    while(!q.empty()){
        int cur = q.front();
        q.pop();

        for(int child : arr[cur]){ 
            if(vis[child] == 0){
                vis[child] = 1; 
                dist[child] = dist[cur] + 1;
                q.push(child);
            }
        }
    }
}

bool isPrime(int n){
    for(int i=2 ; i*i <= n ; i++)
        if(n % i == 0) return false;
    return true;
}

bool isValid(int a , int b){
    int cnt = 0;

    while(a > 0){
        if(a % 10 != b % 10){
            cnt++;
        }
        a = a/10; b = b/10;
    }

    if(cnt == 1) return true;
    else return false;
}

void buildGraph(){
    for(int i=1000 ; i<=9999 ;i++){
        if(isPrime(i)){
            primes.push_back(i);
        }
    }

    for(int i=0;i<primes.size();i++){
        for(int j=i+1 ; j < primes.size() ; j++){
            int a = primes[i];
            int b = primes[j];

            if(isValid(a,b))            //check whether a and b differ by only one digit
                arr[a].push_back(b) , arr[b].push_back(a); 
        }
    }
}

int main(){
    
    int t,n,m,a,b;
    cin>>t;

    buildGraph();

    while(t--){
        cin>>a>>b;

        fo(i,n){
            arr[i].clear();
            vis[i] = 0;
        }

        for(int i=1000 ;i<= 9999 ; i++){
            dist[i] = -1; 
            vis[i] = 0;
        }

        bfs(a);

        if(dist[b] == -1){
            cout<<"Impossible"<<'\n';
        }
        else{
            cout<<dist[b]<<'\n';
        }
    }
}