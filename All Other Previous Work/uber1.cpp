/*Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.
For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. If our input was [3, 2, 1], the expected output would be [2, 3, 6].
Follow-up: what if you can't use division?
Note: Try to find out the Time complexity and Space complexity for each and every problem.
*/
#include<iostream>
using namespace std;
int main(){
int n,total=1;
cout<<"Enter the total no of elements:-";
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
    cin>>arr[i];

for(int i=0;i<n;i++)
{
    arr[i]=total/arr[i];
    cout<<arr[i]<<" ";
}

}