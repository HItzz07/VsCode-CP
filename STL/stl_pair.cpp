#include<iostream>
using namespace std;

int main()
{
    pair<string,int> p1,p2;
    p1=make_pair("Hitesh",19);
    p2=make_pair("Hitesh",1999);
    cout<<p1.first<<endl<<p1.second<<endl;
    if(p1==p2)
       cout<<"True";
    else
    {
        cout<<"False";
    }
    
}