#include<bits/stdc++.h>
using namespace std;
 int main(){
     int t,n,temp,temp1,res;
     cin>>t;
     while(t--){
         res = 1;
         cin>>n;
         int arr[n];
         map <int , int> us;

         for(int i=0;i<n;i++) cin>>arr[i];   
             
         for(int i=0 ;i<n;i++){
            // cout<<i<<"th"<<endl;    
            // for(auto it = us.begin() ; it != us.end() ;it++) cout<<it->first<<" "<<it->second<<endl;
            
            if(i == 0){
                if(arr[i] != 5) 
                { res = 0;  break; }
                us[arr[i]]++; continue;
            }

            temp1 = arr[i] - 5;

            if(temp1 == 5){
                if(us[5] < 1) {
                    res = 0; break;
                }
                us[5]--;
            }

            else if(temp1 == 10){
                if(us[10] >=1) us[10]--;
                else if(us[5] >= 2) us[5] -= 2;
                
                else{res = 0; break;}
            }

            us[arr[i]]++;
         }
            // for(auto it = us.begin() ; it != us.end() ;it++) cout<<it->first<<" "<<it->second<<endl;


         if(res == 1) cout<<"YES\n";
         else cout<<"NO\n";
         } 
     }