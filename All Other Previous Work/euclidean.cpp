#include<iostream>
using namespace std;
int a,b;
int gcd(int a, int b)
{
    if(a==b)
    return a;
    else if(a<b)
    return gcd(a,b-a);
    else if(a>b)
    return gcd(a-b,b);
}
int main()
{   int x,y,z;
    cout<<"ENter two numbers whose gcd you want to find";
    cin>>x>>y;
    z=gcd(x,y);
    cout<<z;
    return 0;
}