#include<bits/stdc++.h>
using namespace std;

bool isVowel(char c) 
{ 
    return (c == 'a' || c == 'e' || c == 'i' 
            || c == 'o' || c == 'u'); 
             
} 
 

int main(){

    string s;
    int k;
    cin>>s;
    cin>>k;

    int count = 0,total = 0, res = 0 , i=0 , j=0; 
    while(s[j]){
        // cout<<res<<endl;
        if( total < k)  
        {
            if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u'){
                count++;
                cout<<s[j]<<" "<<count<<endl;
            } 
            total++;      
            j++; 
        }

        else{

            cout<<" res "<<res<<" count "<<count<<endl;
            count = 0 ;
            total = 0;
            i++;
            j=i;
        }
            res = max(res, count);
           
    }

    // if(res == 0) res = -1;
    cout<<res<<endl; 

          
} 