#include<iostream>
using namespace std;
void Swap(int a,int b)
{
    int t=a;
    a=b;
    b=t;
}

int main()
{
    int m,n,r;
    cout<<"Enter the two numbers";
    cin>>m>>n;
    while(n!=0)
    {   
        Swap(m,n);
        r=m%n;
        m=n;
        n=r;
    }
    cout<<m;
}