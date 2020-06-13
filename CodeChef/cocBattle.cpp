#include<bits/stdc++.h>
using namespace std;


void findAllOccurrence(vector<size_t> &vec, string data, string toSearch)
{
// Get the first occurrence
size_t pos = data.find(toSearch);

// Repeat till end is reached
while( pos != string::npos)
{
// Add position to the vector
vec.push_back(pos);
// Get the next occurrence from the current position
pos = data.find(toSearch, pos + toSearch.size());
}

// std::string::npos
// npos is a static member constant value with the greatest possible value for an 
// element of type size_t. This value, when used as the value for a len (or sublen) 
// parameter in string's member functions, means "until the end of the string". 
// As a return value, it is usually used to indicate no matches.

}

int main(){
    int t;
    cin>>t;
    for(int l=0;l<t;l++){
        int n,m,k;
        int num;
        // cin.ignore();
        cin>>n>>m>>k;
        string opponent ,mine;
        cin>>opponent;
        cin>>mine;
        
        int count = 0;
        
        size_t pos = opponent.find(mine);

        while(pos != string::npos){  //used to denote end of string
            count++;
            cout<<"pos->"<<pos<<" ";
            pos = opponent.find(mine , pos + 1 );      
        }
        cout<<endl;

        // cout<<count<<endl;
        
        // while(opponent.find(mine) != opponent.end())
        //     {
        //     found =  opponent.find(mine,found+1);
        //     count++;
        //     }
        // num = count(opponent.begin() , opponent.end() ,'a' ); //this method is used to count specific char and not the substring
        // cout<<num;
        // cout<<count<<" "<<found<<endl;
    }
}