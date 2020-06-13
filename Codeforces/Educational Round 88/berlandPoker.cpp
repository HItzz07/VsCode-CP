#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define mod 1000000007

int main(){
    int t ; 
    cin>>t;
    while(t--){
        int n,m,k,ans,ic;
        cin>>n>>m>>k;
        ic = n/k;
        if(ic >= m){
            ans = m;
        }
        else if(ic < m){
                int left=0;
                m = m - ic;
                k=k-1;
                if(m/k >= ic){
                    left = ic;
                }
                else{

                    if(m % k == 0){
                        left = m/k;
                    }
                    else{
                        left = m/k + 1;
                    }    
                }
                ans = ic-left;
            // }
        }
        cout<<ans<<'\n';
    }
}