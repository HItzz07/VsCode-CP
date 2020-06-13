#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n],pro=1;
        for(int j=0;j<n;j++){
            cin>>arr[j];
            pro=pro*arr[j];
        }
        for(int j=0;j<n;j++){
            cout<<(pro/arr[j])<<" ";
        }
        cout<<endl;

    }
}