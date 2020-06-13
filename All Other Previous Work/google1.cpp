/*Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.*/

#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n,num;
    cout<<"Enter the no of elements given in the array:-  ";
    cin>>n;
    cout<<"Enter the sum";
    cin>>num;
    int start=0,end=n-1,z;
    vector <int> arr(n);
    cout<<"Enter the elements of the array:-"<<endl;
    for(int i=0;i<n;i++)
       cin>>arr[i];
    sort(arr.begin(),arr.end());
    while(arr[end]+arr[start]!=num)
    {
        
        if(arr[end]+arr[start]>num)
            end--;
    
        else if(arr[end]+arr[start]<num)
            start++;
    }

    if(arr[end]+arr[start]==num)
    {
        cout<<arr[start]<<"  "<<arr[end];
    }
       
return 0;
}