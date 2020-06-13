// https://codeforces.com/contest/1360/problem/C
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

     while(t--){
         int n;
         cin>>n;
         vector <int> v1(n);
         int no = 0 , ne = 0;

         for(int i=0 ; i< n ; i++){
             cin>>v1[i];
             if(v1[i] % 2 == 0){
                 ne++;
             }
             else{
                 no++;
             }
         }
         int found = 0;
        //  cout<<no<<" "<<ne;   
         sort(v1.begin() , v1.end());

        // for(int i=0;i<n;i++){
        //     cout<<v1[i]<<endl;
        // }

         if((ne + no) % 2 == 0){

             if(ne % 2 == 0 && no % 2 == 0 ){
                 found = 1;
             }
             else{
                 for(int i=0;i<n-1;i++){
                     if(abs(v1[i] - v1[i+1]) == 1) {
                      found = 1; break;
                     }
                 }
             }
         }

         if(found == 1) cout<<"YES"<<'\n';
         else cout<<"NO"<<'\n';



                      }
}