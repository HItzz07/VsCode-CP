#include<iostream>
using namespace std;

int main(){
    int n,q;
    cin>>n;
    string str[n];

    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    cin>>q;
    int ns[q];
    for(int i=0;i<q;i++)
    {
        ns[i]=0;
        string st;
        cin>>st;

        for(int j=0;j<n;j++){
            if(st==str[j])
                ns[i]++;
        }
    }

    for(int i=0;i<q;i++){
        cout<<ns[i]<<endl;
    }
}