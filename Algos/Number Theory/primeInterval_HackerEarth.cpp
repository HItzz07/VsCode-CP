#include<bits/stdc++.h>
using namespace std;
vector <int > primes;
bool arr[10001];
void sieve(int l , int r){
    int maxN = 10000;

    arr[0] = arr[1] = true;
    for(int i=2 ; i*i<=r ; i++){
        if(arr[i] == false){
            for(int j = i*i ; j<=r ; j+=i){
                arr[j] = true;
            }
        }
    }

    for(int i=l;i<=r;i++){
        if(arr[i] == false) cout<<i<<" ";
    }
}

int main(){
    int l ,r;
    cin>>l>>r;
    sieve(l,r);
} 

