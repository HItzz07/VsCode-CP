#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int noOfEachElement[101];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<101;i++){
        noOfEachElement[i]=0;
    }

    for(int i=0;i<n;i++){
        noOfEachElement[arr[i]]++;     
    }

    int max=0,sum=0;
    for(int i=0;i<101;i++){
        if(noOfEachElement[i]>max){
            max=noOfEachElement[i];
        }
    }

    for(int i=0;i<101;i++){
        sum+=noOfEachElement[i];
    }
    sum-=max;

    cout<<sum<<endl;
}