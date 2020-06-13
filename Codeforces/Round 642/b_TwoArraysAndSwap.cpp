#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
 
    for(int l=0;l<t;l++){
        
        int n,k;
        cin>>n;
        cin>>k;

        vector <int > a(n), b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            // int value;
            // cin>>value;
            // a.insert(value);
        }

        for(int i=0;i<n;i++){
            cin>>b[i];
            // int value;
            // cin>>value;
            // b.insert(value);
        }

        sort(a.begin() ,a.end());
        sort(b.begin() ,b.end() , greater <int>());

        for(int i=0;i<k;i++){
            if(a[i] < b[i]){
                a[i]=b[i];    
            }
        }

        int sum = accumulate(a.begin() , a.end() , 0);

        cout<<sum<<endl;


    }
}