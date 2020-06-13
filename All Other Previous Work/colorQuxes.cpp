#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    char ch[n];
    for(int i=0;i<n;i++){
        cin>>ch[i];

    }
        if(ch[0]=='R'){
            int j=0;
            while(ch[j]=='R'){
                j++;
            }
            if(ch[j]=='G'){cout<<"B"<<endl;}
            else if(ch[j]=='B'){cout<<"G"<<endl;}
            else cout<<"R"<<endl;
        }
        else if(ch[0]=='G'){
                        int j=0;
            while(ch[j]=='G'){
                j++;
            }
            if(ch[j]=='B'){cout<<"R"<<endl;}
            else if(ch[j]=='R'){cout<<"B"<<endl;}
            else cout<<"G"<<endl;
        }
        else if(ch[0]=='B'){
                        int j=0;
            while(ch[j]=='B'){
                j++;
            }
            if(ch[j]=='R'){cout<<"G"<<endl;}
            else if(ch[j]=='G'){cout<<"R"<<endl;}
            else cout<<"B"<<endl;

        }
    
}