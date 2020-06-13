#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int t=0;
        vector <int > val(n+1 , 0);

        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            val[k+1]++;
        }
        
        sort(val.begin() , val.end() );
       
       for(int i=0;i<n;i++){
           if(val[i]!=0){
               if(val[i] == val[i+1]){
                   t=1;
               }
           }
       }

        if(t == 1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;

        }
    }

}




























// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector <int> jars(n) , used;
//         int found = 0,enable = 0;
//         for(int i = 0;i<n;i++){
//             cin>>jars[i];
//         }

//         for(int i=0;i<n;i++){
            
//             if(jars[i] != jars[i+1]){
//                 enable = 1; 
//                 used.push_back(jars[i]);
//             }

//             if(enable == 1){

//                 auto it = find(used.begin() , used.end() , jars[i+1]);
//                 auto it1 = used.end();
//                 if(it != used.end()){
//                      found = 1;
//                      break;
//                 }
//             }
//         }

//         if(found == 0){
//             cout<<"YES"<<'\n';
//         }
//         else{
//             cout<<"NO"<<'\n';
//         }

//     }

// }

