
// https://codeforces.com/contest/1353/problem/E
// https://codeforces.com/contest/1353/problem/F
#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,count=0;
        cin>>n>>k;
        // k=k-1;
        int tmp = k;
        char ch[n];
        cin>>ch;
        

        int i=0;
        while(i != n){
            
            if(ch[i] == '1' && (i+k < n)){
                hi:
                if(ch[i+k] == '1'){
                    
                    tmp = k-1;
                    
                    while((tmp--) && (i != n)){
                        i++;    
                        if(ch[i] == '1' ){
                            ch[i] = '0';
                            count++;
                        }
                    }
                }
                else
                   {
                       bool it = binary_search(ch+i+k, ch+n , '1');
                       if(i != n && it){
                       ch[i+k] ='1';
                       count++;
                        goto hi;
                       }
                           
                   } 
                       
                    // break;
            }
            
            else
                i++;            
        }
       
        cout<<" ch "<<ch<<"  "<<count<<endl;

    }
}





















//for pattern like 100100100...
// #include<bits/stdc++.h>
// using namespace std;
//
//
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k,count=0;
//         cin>>n>>k;
//         k=k-1;
//         int tmp = k;
//         char ch[n];
//         cin>>ch;      
//         auto it = find( ch , ch+n ,'1');
//         it++;
//         while(*it != '\0'){
//             while(tmp--){
//                 if(*it == '1') 
//                     {  
//                         cout<<*it<<" -> ";
//                          *it = '0';
//                         cout<<*it<<endl;
//                         count++;
//                     }
//                 it++;
//             }
//             // cout<<ch<<" count  "<<count<<endl;
//             if(*it == '0') 
//                 {
//                     cout<<*it<<" -> ";
//                     *it = '1';
//                     cout<<*it<<endl;
//                     count++;
//                 }
//             it++;
//             tmp=k;
//         }
//             cout<<" ch "<<ch<<" count  "<<count<<endl;
//     }    
// }