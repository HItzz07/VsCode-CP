// https://www.youtube.com/watch?v=yDdzbZhSYD0
#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,u,v;
        cin>>n>>x;
        int deg = 0;
        for(int i = 0 ; i<n-1 ; i++){
            cin>>u>>v;
            //we  have to check the degree of the x if its 1 or 0 then ayush can directly reach it else we have to go to the else part
            if(u == x || v == x) deg++;
        }

        if(deg <=1) cout<<"Ayush\n";
        
        else{
            if((n-3)%2 == 0) cout<<"Ashish\n";
            else cout<<"Ayush\n";
        }
    }
}
