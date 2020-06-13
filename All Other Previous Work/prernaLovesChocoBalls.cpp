#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
 int main(){
 int n,j;
 cin>>n>>j;
 vector <int> arr(n);
    for(int i=0;i<n;i++)
    {   
        cin>>arr[i];
    }    
    sort(arr.begin(),arr.end());
    int i=0,temp1=0,temp2=0,temp=0,count=0;
    while(arr[i]<=j){
        temp1=arr[i];
        temp2=arr[i+1];
        temp=(1*temp1)+(2*temp2);
        arr[i+1]=temp;
        sort(arr.begin(),arr.end());
        count++;
        i++;
    }

    cout<<count<<endl;


 }
