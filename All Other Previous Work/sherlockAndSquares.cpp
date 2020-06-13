#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin>>q;

    for(int i=0;i<q;i++){
        int a,b;
        cin>>a>>b;
        int count=0,aRoot,bRoot;
        aRoot = sqrt(a);
        bRoot = sqrt(b);

        for(int j = aRoot; j <= bRoot ; j++){
            if((j*j) >= a && (j*j) <= b){
                count++;
            }
        }

        if(count == 0){
           cout<<(int)0<<endl;   
        }else{
              cout<<count<<endl;
         }
    }
}