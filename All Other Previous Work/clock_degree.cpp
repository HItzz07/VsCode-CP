#include<iostream>
using namespace std;

int main()
{
int hh,mm,k,m,l,y;
cout <<"Enter the hh and mm respectively";
cin>>hh>>mm;
k=30;
m=6;
k=hh*k;
m=mm*m;
l=mm/12;
l=l*6;
        y=abs(m-k);
        y=abs(y-l);
    
cout<<y<<" degrees"<<endl;

}