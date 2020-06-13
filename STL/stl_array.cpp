#include<iostream>
using namespace std;
#include<array>
int main()
{
    array <int,5> arr={1,22,11,34};
    // arr.fill(10);
    for(int i=0;i<arr.size();i++)
        cout<<arr.at(i)<<endl;

        cout<<arr.end();
       
}