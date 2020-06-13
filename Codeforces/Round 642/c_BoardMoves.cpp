#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
 
    while(t--){
        
        int n;
        cin>>n;
        int base = 8,layers,count=1;
        long long int sum=0;
        if(n == 1){
            cout<<0<<endl;
        } 
        else if( n == 2){
            cout<<3<<endl;
        }
        else{

         if(n % 2 == 0){  //even
            layers = n/2;
            for(long long int i=1 ; i <= layers-1;i++){
               sum += base*i*i;    
               count++;  
            }
            sum += ((n*2) - 1)*count;  //this layer covers only two sides 
        }

        else{           //else odd
            layers = n/2;
            for(long long int i=1 ; i <= layers;i++){
               sum += base*i*i;        
            }
        }
            cout<<sum<<endl;

        }

    }
}