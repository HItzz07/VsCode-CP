#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int fibo(int n){
		  if(n==1){return 0;}
          else if(n==2){return 1;}
          else{return (fibo(n-1)+fibo(n-2));}
       
}
 int main(){
	 int t;
	  cin>>t;
	  for(int i=0;i<t;i++)
	  {
		  int l,r,x,sum=0;
		  cin>>l>>r;
            r=r%((int)(pow(10,9))+7);
		  for(int i=l;i<=r;i++)
		  {
			  sum=sum+fibo(i);
		  }
			cout<<sum<<endl;
	  }
 }


 /*
 #include<bits/stdc++.h>
#include<math.h>
using namespace std;
int fibo(int n){
		  if(n==1){return 0;}
          else if(n==2){return 1;}
          else{return (fibo(n-1)+fibo(n-2));}
       
}

int modulo(int n)
{int c=0;
int arr[4];
    while(c!=4){
        arr[c]=n%10;
        n=n/10;
        c++;
    }
    int num=1000*arr[0]+100*arr[1]+10*arr[2]+arr[3];
    return num;
}
 int main(){
	 int t;
	  cin>>t;
      int  l,r;
	  for(int i=0;i<t;i++)
	  {
		  int sum=0;
          
		  cin>>l>>r;
            r=r%((int)(pow(10,9))+7);
		  for(int i=l;i<=r;i++)
		  {
			 sum=sum+modulo(fibo(i));

		  }
          sum=sum%((int)(pow(10,9))+7);
			cout<<sum<<endl;
	  }
 }*/