#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        int n,q,j,l;
        int c1=0,c2=0,c0=0;
        cin>>n>>q;
        int arr[n],p[q],res[n];

        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<q;i++)
            cin>>p[i];  

        for(int i=0;i<q;i++)
        {   c1=0,c2=0;
            for(int j=0;j<n;j++)
            {
                res[j]=p[i]^arr[j];
               // cout<<res[j]<<endl;
            }

            for(int l=0;l<n;l++)
            {   int a[20];
                c0=0;
                for(j=0; res[l]>0; j++)    
                {    
                    a[j]=res[l]%2;    
                    res[l]= res[l]/2;  
                  //   cout<<a[j]<<"\t";
                }

                for(j=j-1;j>=0;j--)
                {   
                   // cout<<a[j]<<"\t";
                    if(a[j]==1)
                        c0++;
                }
                
                //cout<<c0<<"\t";
                if(c0%2==0)
                    c2++;
                else
                    c1++;
            }
            cout<<c2<<"\t"<<c1<<endl;
        }      
    }
}