#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the order of square matrix";
    int n;
    cin>>n;
    cout<<"Enter the elements of teh matrix";
    int arr[n][n],arr1[n][n],arr2[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    //Left Rotation
    for(int j=0,ii=0,k=0;j<n;j++,k++,ii++)
    {
        for(int i=n-1,jj=0;i>=0;i--,jj++)
        {
            arr1[i][k]=arr[ii][jj];
        }
    }

    //Right Rotation
    for(int j=0,ii=0,k=0;j<n;j++,k++,ii++)
    {
        for(int i=n-1,jj=0;i>=0;i--,jj++)
        {
            arr2[ii][jj]=arr[i][k];
        }
    }

    //Displaying the  matrices
    cout<<endl<<"Original Matrix"<<endl;
    for(int i=0;i<n;i++)
    {        
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"Left Rotation"<<endl;
    for(int i=0;i<n;i++)
    {
        
        for(int j=0;j<n;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<"Right Rotation"<<endl;
    for(int i=0;i<n;i++)
    {
        
        for(int j=0;j<n;j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }

}