#include<iostream>
#include<tuple>
using namespace std;
int main()
{
    tuple <int,string,int > t1;
    t1 = make_tuple(19,"Hitesh",97);
    cout<<get<0>(t1)<<endl;
    cout<<get<1>(t1)<<endl;
    cout<<get<2>(t1)<<endl;

}