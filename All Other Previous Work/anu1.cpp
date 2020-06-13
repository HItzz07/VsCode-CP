#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    char arr1[2][2];  
    int i=1,j=1,k,m,n,ct1=0,ct=0;
    char arr[5][5];
    cout<<"Enter the string";
    for(k=1;k<=5;k++)
    {
        for(m=1;m<=5;m++)
        {
            cin>>arr[k][m];
        }
    }
    


    //while(i<=5)
    {
        while(j<=5)
        {
            cout<<arr[i][j++];
            ct++;
            ct1++;
            if(ct1==2)
            {
                i++;
                j=1;
                //ct1=0;
            }

            if(ct1==4)
            {
                cout<<endl<<"***************"<<endl;
                i=i-1;
                j=j+1;
                ct1=0;
            }

            if(ct==10)
            {

            }
        }

    }                
}