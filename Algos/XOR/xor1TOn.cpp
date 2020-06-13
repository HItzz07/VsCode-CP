#include<bits/stdc++.h>
using namespace std;  

long computeXOR(int n){
    switch(n % 4){
    case 0: return n;     // if n is multiple of 4 
    case 1: return 1;     // If n % 4 gives remainder 1   
    case 2: return n + 1; // If n % 4 gives remainder 2     
    case 3: return 0;     // If n % 4 gives remainder 3 
    }
}

int main(){
    int n;
    cin>>n;
    cout<<computeXOR(n)<<endl;
}