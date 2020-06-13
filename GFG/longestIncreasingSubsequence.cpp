#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if( n == 1 ){
        cout<<1<<endl;
    }
    else{
        vector <int > lis( n , 1);

        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(arr[i] > arr[j]){
                    int temp = lis[j]+1;
                    // cout<<" i "<<i<<" j "<<j<<"  "<<" arr[i] "<<arr[i]<<" arr[j] "<<arr[j]<<"  "<<lis[i]<<"  "<<temp<<endl;
                    lis[i] = max(temp , lis[i]);
                }
            }
        }
        int max = *max_element(lis.begin() , lis.end() );
        cout<<max<<endl;
    }
}
