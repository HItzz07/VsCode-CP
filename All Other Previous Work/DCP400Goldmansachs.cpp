/*Good morning! Here's your coding interview problem for today.

This problem was asked by Goldman Sachs.

Given a list of numbers L, implement a method sum(i, j) which returns the sum from the sublist L[i:j] (including i, excluding j).

For example, given L = [1, 2, 3, 4, 5], sum(1, 3) should return sum([2, 3]), which is 5.

You can assume that you can do some pre-processing. sum() should be optimized over the pre-processing step.*/

#include<bits/stdc++.h>
using namespace std;

int l[]={1,2,3,4,5};
int s=0;
int sum(int a,int b){
    for(int i=a;i<b;i++)
    {
     s+=l[i];
   //  cout<<i<<" "<<l[i]<<endl;   
    }
    return s; 
}
int main(){
int i,j;
cin>>i>>j;
s=sum(i,j);
cout<<s;

}
