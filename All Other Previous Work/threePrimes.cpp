#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        //cin>>arr[i];
        int t,j=1,count=1;
        cin>>t;
        while(j<t){
            if(t%j==0){
                count++;
            }
    //        cout<<j<<endl;
               j++;
        }

        if(count==3){
            cout<<"YES"<<endl;
        }
        else{cout<<"NO"<<endl;}
    }

    
}