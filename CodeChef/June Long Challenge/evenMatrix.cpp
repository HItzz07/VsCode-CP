#include <bits/stdc++.h>
using namespace std;
// int m[1001][1001];

int main() {
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int m[n+1][n+1];

        memset(m , 0 , sizeof(m));
        
        for(int i=1 ;i<=n ;i++)    m[i][1] = i*i;
        
        int count = 2 , l;
            for(int i=2 ;i<=n ;i++){
                for(int j=1  ;j <=i ; j++){
                    m[j][i] = count++;
            }
            
            int k = i;
            l = i;
            while( k > 1){
                k--;
                if(m[l][k] == 0) m[l][k] = count++;
            }
            count += 1;
        }
        
        for(int i=1 ;i<=n ;i++){
            for(int j=1  ;j <=n  ; j++){
                cout<<m[i][j]<<" ";        
            }
            cout<<endl;
        }
    }
}