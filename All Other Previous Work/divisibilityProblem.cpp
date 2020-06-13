#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
     for(int i=0;i<t;i++){
         int a,b,c=0;
         cin>>a>>b;
            if(a%b==0)
            {
                cout<<"0"<<endl;
            }
            else
            {
                c=a/b;
                c=b*(c+1)-a;
                cout<<c<<endl;
            }
            /*else
            {
                while((a%b)!=0){
                    a++;
                    c++;
                }
                cout<<c<<endl;
            }*/
            
              }
}