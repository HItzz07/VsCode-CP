#include<bits/stdc++.h>
using namespace std;

int main(){

    string sentence;
    string searchWord;

    getline(cin , sentence);
    cin>>searchWord;

    stringstream s(sentence);

    string word;
    int count =0;
    int fnd =0;
    while(s >> word){
        count++;
        size_t found = word.find(searchWord); 
        if (found != string::npos){
            if(found == 0){
                fnd = 1;
            break;        
            }
        }    
    }

    if(fnd == 1) cout<<count<<endl;
    else cout<<-1<<endl;

}