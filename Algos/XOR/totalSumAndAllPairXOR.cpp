#include<bits/stdc++.h>
using namespace std;
 int main(){
     int arr[1001];
     int n,res = 0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<31;i++){  //our input is 32 bi integer
         int cntZ = 0, cntO = 0;

         for(int j=1;j<=n;j++){
             if(arr[j] & (1<<i)) cntO++;  //if true
             else cntZ++;
         }
        int totalPairs = cntZ * cntO;

        res += (1<<i) * totalPairs;   //   1<<i  is 2 to power and totalPair is total no of pairs 
    }

    cout<<res<<endl;
 }
