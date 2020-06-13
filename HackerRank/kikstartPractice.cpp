//B
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];

        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        
        int count = 0;
        for(int j=1;j< n-1 ; j++){

            if((arr[j] > arr[j-1])  && (arr[j] > arr[j+1])){

                count++;
            }
        }
        cout<<"Case #"<<(i+1)<<": "<<count<<endl;     
        }
    }
    // cout<<j<<"->"<<arr[j]<<" "<< j-1<<"->"<<arr[j-1]<<" "<<j+1<<"->"<< arr[j+1]<<endl;










//A
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
    
//     for(int i=0;i<t;i++){
//         int n,b;
//         cin>>n>>b;
//         vector <int >v(n);
        
//         for(int j=0;j<n;j++)
//             cin>>v[j];
        
//         sort(v.begin() , v.end());
        
//         int sum=0,j=0,count=-1;
        
//         while(sum <= b){
//             sum+=v[j++];
//             count++;
//         }

//         cout<<"Case #"<<(i+1)<<": "<<count<<endl;
        
        
        
//         }
            
        
        
//     }