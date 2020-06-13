#include<bits/stdc++.h>
using namespace std; 
int arr[1000001];

//initially all of them are -1 and then it starts from 2 , when we start filling up all the blocks, 
// first we fill the multiple of 2 by then move forward to 3 and then fill the multiples of 3 with 3 if it is -1
// and this goes on till maxN , so prime no. are filled by their value only on their position 
void sieve(){
    int maxN = 1000000;
    for(int i=1;i<=maxN;i++) arr[i] =-1;

    for(int i=2 ; i <= maxN ;i++){
        if(arr[i] == -1){
            for(int j=i ; j<=maxN ; j+=i){
                if(arr[j] == -1) arr[j] = i;
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    map <int ,int > m;
    sieve();
    while(n > 1){
        if(arr[n] != -1){
            m[arr[n]]++;
            n=n/arr[n];
        }
    }
    auto it1 = m.end();
    it1--;  
    for(auto it = m.begin() ; it != m.end() ;it++){
        cout<<it->first<<"^"<<it->second;
        if(it != it1) cout<<" x ";
    }
} 