#include<bits/stdc++.h>
#include<vector>
//#include<algorithm>
using namespace std;

int main(){
    int n,a,min=0,max=9999;
    cin>>n;
    vector <int> arr;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    int length = arr.size();
         while(max != min){
        cout<<length<<endl;

        for(int i=0;i<length;i++)
        arr[i]-=min;

        sort(arr.begin(), arr.end(),greater <int>());
        max = arr[0];//*min_element(arr.begin(), arr.end());
        min = arr[length-1];//*max_element(arr.begin(), arr.end());   
            
         int i=length-1;
         while(arr[i] == min){
             arr.pop_back();
             i--;
         }
            length = arr.size();
         }

}