#include<iostream>
#include<map>
using namespace std;
int main()
{
    map <string,int > m1{
        {"Hitesh",19},{"Hitzz",07},{"Hites",495},{"its_hitzz",97}
    };

    cout<<m1["its_hitzz"];
    m1.insert(pair<string,int>("Hit",06));
    map <string,int> :: iterator it=m1.begin();

    while(it!=m1.end())
    {
        cout<<it->first<<"--->>"<<it->second<<endl;
        it++;
    }
    cout<<m1.empty();

}