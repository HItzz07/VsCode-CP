#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0;
    cin>>n;
    
    while(sum != 1){
        sum=0;
        while(n > 0){
            int r;
            r = n%10;
            sum += (r*r);
            n = n/10;
        }
        // cout<<sum<<endl;
        if(sum == 1){
            cout<<"Happy Number";
            break;
            }
        else if(sum/10 == 0){
           if(sum != 1 || sum != 7 ){
                 break;
             }
           }

        n=sum;
       
    }

    if(sum!=1){
        cout<<"Not a Happy Number"<<endl;
    }
    
}