#include<bits/stdc++.h>
using namespace std;
#define int long long 

vector<bool> isPrime;
vector <int > sFactor,primes; 

void sieve(int n){  
    isPrime.assign(n+1 , true);  //initialising all the values in the vector to true
    sFactor.assign(n+1 , 0);    //initialising all the values in the vector to 0

    isPrime[0] = isPrime[1] = false;
    primes = {};

    for(int i=2;i<=n;i++){
        if(isPrime[i]){
            sFactor[i] = i; //eg:- putting 2 in position of 2
            primes.push_back(i);
            for(int j=i*i ; j<=n ; j+=i){
                if(isPrime[j]){       //checking if it is already visited or not
                    isPrime[j] = false; //if not then making it visited
                    sFactor[j] = i;     // eg:- putting 2 in the places of multiple of 2
                }
            }
        }
    }
}


void solve(){
    int i,n,j,a;
    cin>>n;
    vector <pair<int , int > > ans;

    // we take d1 as all smallest factor of a   and d2 = a/d1 such that  d2 does not contain any factor of d1.
    //(eg:- 180 = 2^2 x 3^2 x 5^1 -> d1 = 2^2 and d2 = a/d1 ~= 3^2 x 5^1 )    
    
    for(int i=0;i<n;i++){
        cin>>a;
        int p = sFactor[a];   //taking the minimum value of prime factorization of "a"  
        int x = a,d1=1,d2;  
        
        while(x%p == 0){
            x=x/p;
            d1 = d1*p;
        }
        d2 = a/d1;

        if(d1 > 1 && d2>1 && __gcd(d1,d2) == 1) ans.push_back({d1,d2});
        else ans.push_back({-1,-1});
    }

    for(auto x:ans) cout<<x.first<<" ";
    cout<<endl;
    for(auto x:ans) cout<<x.second<<" ";
    cout<<endl;
}

 

int32_t main(){
    sieve(1e7+5);
    solve();
    return 0;
}
