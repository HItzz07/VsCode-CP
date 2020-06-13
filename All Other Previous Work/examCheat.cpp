#include <iostream>
#include<stdlib.h>
using namespace std;

int main() {
    long int A,B,T,p=1,z=1;
 
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>A>>B;
        if( A-B!=0)
            {
                while(p<=A && p<=B)
        	       {   if((A-B)%p==0)
        	       	   z++; p++;
        	       }
               cout<<z<<endl;
            }
        else
            cout<<"-1"<<endl;
     
 
    	
	}
	return 0;
}
