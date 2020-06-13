//try to use bitwise sieve to reduce time complexity

#include<bits/stdc++.h>
using namespace std;
vector <int> primes;   
bool arr[90000001];  //bool array of size 90 million  initialized by 0
 void sieve(){
     int maxN = 90000000;
     arr[0]= arr[1] = true;  //stating them here as non prime

         for(int i=2 ; i*i<=maxN ;i++){
             if(arr[i] == false) //it is a prime num here we are checking for 2 
                {   
                    for(int j = i*i ; j<=maxN ;j+=i){
                        arr[j] = true; //true composite , false prime
                    }
                }   
         }

         for(int i=2 ;i<=maxN ;i++)
             if(arr[i] == false) primes.push_back(i);
 }

 int main(){
     int q,n,p=0;
     cin>>q;
     sieve();
     while(q--){
         cin>>n;
         cout<<primes[n-1]<<endl;  //nth prime number will be at index n-1
     }

 }