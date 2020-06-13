#include<bits/stdc++.h>
using namespace std;

long computeXOR(int n ){
    int mod = n % 4; 
    if( mod== 0) return n;
    else if(mod == 1) return 1;
    else if(mod == 2) return n+1;
    else if(mod == 3) return 0;
}

int findXOR(int l ,int r){
    return (computeXOR(l-1) ^ computeXOR(r));
}

int main(){
int l,r;
cin>>l>>r;

cout<<findXOR(l,r)<<endl;

}
