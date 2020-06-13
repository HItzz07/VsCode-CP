#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main()
{
    int count=0,fn,j,i,k=0;
    char arr[20],arr1[50];
    cout<<"Enter the filename and the field no. :-";
    cin>>arr>>fn;
 fstream fio;
 fio.open("example.txt");
char c;

 while(fio)
 {
        c=fio.get();
        if(c==' ')
           {
               count++;
               cout<<k++;
                if(count==(fn-1))
                   cout<<"yo"<<c;
                   
           }

            else if(c=='\n')
                {count=0; cout<<"hitzz";}
            else 
                continue;    
           

       } 
     fio.close();

 }
