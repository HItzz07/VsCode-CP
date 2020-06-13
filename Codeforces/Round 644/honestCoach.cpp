#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,min=999999999;
        cin>>n;
        vector <int > arr(n);
        int val;   
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        sort(arr.begin() , arr.end());

        for(int i=0;i<n-1;i++ ){

            // cout<<arr[i]<<endl;
            if(arr[i+1] - arr[i] < min){
                min = arr[i+1] - arr[i];
            }
        }
        cout<<min<<endl;
        }
}