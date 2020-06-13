#include<bits/stdc++.h>
using  namespace std;

int main(){
    int t;
     cin>>t;
     while(t--){
         int n,x,ne=0,no=0;
         cin>>n>>x;
         int arr[n];

         for(int i=0 ;i<n;i++){
             cin>>arr[i];
             if(arr[i] % 2 == 0 ) ne++;
             else no++;
         }

        if(no == 0){
            cout<<"No\n";
        }
        else{
            
            if(ne == 0){
                
                if(x % 2 == 0) cout<<"No\n";
                else cout<<"Yes\n";
            }
            else{
                if(x == n){
                    if(no % 2 == 0 ) cout<<"No\n";
                    else cout<<"Yes\n";
                }

                else{
                    cout<<"Yes\n";
                }
            }
        }
     }
}