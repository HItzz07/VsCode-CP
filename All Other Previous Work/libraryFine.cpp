#include<bits/stdc++.h>

using namespace std;

int main(){
    int d1,m1,y1,d2,m2,y2;
    cin>>d1>>m1>>y1>>d2>>m2>>y2;

    if(y1 < y2){
        cout<<int(0)<<endl;
    }

    else if(d1  > d2 && m1 == m2){
            cout<<(15 * (d1-d2))<<endl;
            }
    else if(m1 > m2 && y1 == y2){
            cout<<(500 * (m1-m2))<<endl;
           }
    else if(y1 > y2){
              cout<<int(10000)<<endl;  
            }
    else{
        cout<<int(0)<<endl;
    } 

}