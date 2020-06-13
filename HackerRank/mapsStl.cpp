#include<bits/stdc++.h>

using namespace std;

int main(){

    int q;
    cin>>q;
    string x;
    map <string ,int > marks;
    for(int i=0;i<q;i++){
        int ch;
        cin>>ch;
        switch(ch){

        case 1:

            int y;
            cin>>x>>y;
            marks[x] += y;

        break;  

        case 2:
            
            cin>>x;
            marks.erase(x);

        break;

        case 3:
            cin>>x;
            cout<<marks[x]<<endl;
        break;    

        }
    
    }
    

}







