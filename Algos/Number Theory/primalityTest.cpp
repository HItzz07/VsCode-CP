#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
         if(n == 1) return false;
         
         for(int i=2 ;i<=sqrt(n);i++){
             if(n%i == 0) return false;
            }
            return true;
}
 int main(){
     int t,n,p=0;
     cin>>t;
     while(t--){
         cin>>n;
            bool a = isPrime(n);
            if(a) cout<<"true\n";
            else cout<<"false\n";
         }
     }