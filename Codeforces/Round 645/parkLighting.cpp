#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int total = 0;
        if((n % 2 == 0) && (m % 2 == 0) ){
            total += n*(m/2);
        }

        else if((n % 2 != 0) && (m % 2 != 0)){
            total += n*(m/2) + n/2 +1;
        }

        else if((n % 2 == 0) && (m % 2 != 0) ){
            total += m*(n/2);
        }

        else if ((n % 2 != 0) && (m % 2 == 0 )){
            total += n*(m/2); 
        }

        cout<<total<<'\n';
    }
}