#include<bits/stdc++.h>
using namespace std;
int countValues(int n){
    int count = 0;
    while(n){
        if((n & 1) == 0)
            count++;
        n=n>>1;    
    }
        //return 2 ^ count   
    return count<<1;
}

 int main(){
    int n;
    cin>>n;
    cout<<countValues(n);
 }