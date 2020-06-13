#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x=0,y=0;
        int n;
        cin>>n;
        char ch[n];
        char c='c';
        cin>>ch;
        int l=0,r=0,u=0,d=0;
        for(int i=0;i<n;i++){
            if(ch[i]=='L' && l==0 && r==0){
            x-=1;
            l=1;r=1;u=0;d=0;

            }
            else if(ch[i]=='R'&& l==0 && r==0){
                x+=1;
            l=1;r=1;u=0;d=0;
            }
            else if(ch[i]=='U'&& u==0 && d==0){
                y+=1;
            l=0;r=0;u=1;d=1;
            }
            else if(ch[i]=='D'&& u==0 && d==0){
                y-=1;
            l=0;r=0;u=1;d=1;
            }
        }
        cout<<x<<" "<<y<<endl;

    }
}