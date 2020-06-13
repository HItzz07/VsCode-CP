#include<iostream>
using namespace std;
int main()
{
    int arr1[10], arr2[10],arr3[10],arr4[10],arr5[10],arr6[10];
    int a,b,c=1,j;
      for(int i=0;i<10;i++)
    {
        arr1[i]=99;arr2[i]=99;arr3[i]=99;arr4[i]=99;arr5[i]=99;arr6[i]=99;
    }
    cout<<"Enter the no of terms in the first polynomial equation:-";
    cin>>a;
    for(int i=0;i<a;i++)
    {
    cout<<"Enter the Coefficient and Power of the"<<(c++)<<"th term of the  Polynomial equation:-";
    cin>>arr1[i]>>arr2[i];
    }
    cout<<"Enter the no of terms in the second polynomial equation:-";
    c=1;
    cin.ignore();
    cin>>b;
    for(int i=0;i<b;i++)
    {
    cout<<"Enter the Coefficient and Power of the"<<(c++)<<"th term of the Polynomial equation:-";
    cin>>arr3[i]>>arr4[i];
    }

  

    if(a>=b)
    {
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {

                if(arr2[i]==arr4[j])
                    {
                        arr5[i]=arr1[i]+arr3[j];
                        break;
                    }

                else
                {
                    arr5[i]=arr1[i];
                }
                    
                
            }
            //if(j==(b-1) && arr2[i]!=arr4[j])
              //      arr5[i]=arr1[i];
        }

        cout<<"The sum is :- ";
        for(int i=0;i<a;i++)
        {
            cout<<arr5[i]<<"x^"<<arr2[i]<<"+";
        }
        
    }

    else
    {
        for(int i=0;i<b;i++)
        {
            for(int j=0;j<a;j++)
            {
                if(arr2[i]==arr4[j])
                 {
                        arr6[i]=arr1[i]+arr3[j];
                        break;
                 }
               else
                {
                    arr6[i]=arr3[i];
                }
               
            }
           // if(j==(a-1) && arr2[i]!=arr4[j])
             //       arr6[i]=arr1[i];

        }
        cout<<"The sum is :- ";
        for(int i=0;i<b;i++)
        {
            cout<<arr6[i]<<"x^"<<arr4[i]<<"+";
        }
    }
    
    
    

}