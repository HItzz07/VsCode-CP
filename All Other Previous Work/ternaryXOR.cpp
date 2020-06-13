#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,x,xx;
        cin>>n>>x;
        xx=x;
        int xd[n],b;
        for(int i=n;i>0;i--){
            xd[i-1]=xx%10;
            xx=xx/10;
        }
        int a1[n],a2[n],count=0;
        for(int i=0;i<n;i++){
            if(count==1){
                if(xd[i]==2){
                    a1[i]=0;
                    a2[i]=2;
                    }
                
                else if(xd[i]==1){
                    a1[i]=0;
                    a2[i]=1;
                }
                else{
                    a1[i]=0;
                    a2[i]=0;
                }

            }
            else{
                if(xd[i]==2){
                    a1[i]=1;
                    a2[i]=1;
                    }
                
                else if(xd[i]==1){
                    a1[i]=1;
                    a2[i]=0;
                    count=1;
                }
                else{
                    a1[i]=0;
                    a2[i]=0;
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<a1[i];
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            cout<<a2[i];
        }
        cout<<endl;
        
    }
}