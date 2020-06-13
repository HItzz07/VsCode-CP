#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,m,n;
    cin>>t;

  for(int k=0;k<t;k++)
   {
       cin>>n>>m;
    int fruits[n],price[n];
   
    for(int i=0;i<n;i++)
            cin>>fruits[i];

    for(int i=0;i<n;i++)
            cin>>price[i]; 

    int res[m];
    int c;
    for(int i=0;i<m;i++)
    {
            c=0;
           for(int j=0;j<n;j++)
        {
            if(fruits[j]==i+1)
                {res[i]=0; c=1;  break;}
                           
        }
        if(c==0)
        {
            res[i]=3000;
        }
        //cout<<res[i]<<"\n";
    }

                   
   for(int i=0;i<n;i++)
   {
       res[fruits[i]-1]+=price[i];
   }
   for(int i=0;i<m;i++)
        cout<<res[i]<<"\n";

    int min=9999;

   for(int i=0;i<m;i++)
   {
       if(res[i]<min)
       {
           min=res[i];
       }
   }
//Minimum Cost
cout<<min<<"\n";
//cin.ignore();
}

}