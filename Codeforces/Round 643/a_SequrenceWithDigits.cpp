#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int min = 999999,max = 0;

    while(t--){
   
        long long int a1,k;
        cin>>a1>>k;
        k--;

        while(k-- ){
            string str = to_string(a1);
            max = (*max_element(str.begin() , str.end())) - 48;
            min = (*min_element(str.begin() , str.end())) - 48;
            a1 = a1 + max*min;
            if(min == 0)
            {
                break;
            } 
        } 
        cout<<a1<<endl;
    }

    
}