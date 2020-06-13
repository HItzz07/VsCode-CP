#include<iostream>
using namespace std;
int main()
{   int n;
    cout<<"Enter the order of the matrix:-"; cin>>n;
    cout<<"The Identity matrix is:-"<<endl;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            arr[i][j]=1;
            else
            arr[i][j]=0;
        }
    }
    //Displaying
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}