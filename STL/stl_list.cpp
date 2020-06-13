#include<iostream>
#include<list>
using namespace std;
int main()
{
    list <int> l1;
    l1={121,22,21,33,44};
    l1.remove(22);
    l1.pop_back();
    l1.pop_front();
    l1.push_back(343);
    l1.push_front(434);
    list<int>::iterator it=l1.begin();

    
    while(it!=l1.end())
    {
        cout<<*(it)<<endl;
        it++;
    }

}