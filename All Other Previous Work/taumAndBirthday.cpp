#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int b,w,bc,wc,z,expense=0;
        cin>>b>>w>>bc>>wc>>z;
        if(bc==wc){
            expense = (b+w) * bc;
        }
        else if(bc>wc){
          if((bc-wc) > z){
              expense = (b+w)*wc + z*b;
          }  
          else{
              expense = b*bc + w*wc;
          }

        }
        else if(wc>bc){
           if((wc-bc) > z){
               expense = (w+b) * bc + z*w;
          }  
          else{
              expense = b*bc + w*wc;
          }
     
        }

        cout<<expense<<endl;
    }
}