#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int arr[1000001];
int pprimes[1000001];

void sieve(){
    int maxN = 1000000;
    for(int i=1;i<=maxN ; i++) arr[i]  = 1;  //marking all as prime
    arr[0] = arr[1] = 0;

    for(lli i=2 ; i*i<=maxN ; i++ ){
        if(arr[i] == 1){
            for(lli j = i*i ;j <= maxN ;j+=i){
                arr[j] = 0;
            }
        }
    }

    int cnt = 0;

    for(int  i=1;i<=maxN;i++){
        if(arr[i] == 1) cnt++;  //here cnt contains no of primes from 1 to i

        if(arr[cnt] == 1) pprimes[i] =1;  //if no of primes from 1 to i is prime then i is pprime
    }

    //cumulative sum or prefix sum
    for(int i=1;i<=maxN ;i++) pprimes[i] += pprimes[i-1];
    
}
 int main(){
     sieve();
     int l,r,t;
     cin>>t;

     while(t--){
         cin>>l>>r;

         int count = pprimes[r] - pprimes[l-1];  
         cout<<count<<endl;   
     }

 }