
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int arr[n][n];
    int lA=0;
    int j=0;
    int aj[n];
    for(int i=0;i<n;i++)
    {
        aj[i]=0;
    }

    for(int i=0;i<q;i++)
    {
        int t,x,y;
        cin>>t>>x>>y;

        if(t==1)
        {
            arr[(x^lA)%n][aj[(x^lA)%n]++]=y;
            
        }
        else
        {
            int size=aj[(x^lA)%n];
            
            size=y%size;
            //cout<<size<<endl;
            lA=arr[(x^lA)%n][size];
            cout<<lA<<endl;
        }

        /*for(int i=0;i<n;i++)
                {for(int j=0;j<n;j++)
                {
                   cout<<arr[i][j]<<"\t";
                }
                }
                cout<<endl;
          */             
    }
    
}