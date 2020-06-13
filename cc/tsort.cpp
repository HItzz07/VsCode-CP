#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    set <int> v1;
    int a;
    for(int i=0;i<t;i++)
    {
        cin>>a;
        v1.insert(a);
    }
    
    for(auto it=v1.begin();it!=v1.end();it++){
        cout<<*it<<'\n';
    }
}