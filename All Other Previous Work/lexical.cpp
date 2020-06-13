#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main()
{
    int count=0,fn,j,i;
    char arr[20],arr1[50];
    cout<<"Enter the filename and the field no. :-";
    cin>>arr>>fn;
 fstream fio;
 fio.open("example.txt");

 while(fio)
 {
     fio.getline(arr1,50);
       j=strlen(arr1);
       for(i=0;i<j;i++)
       {
           if(arr1[i]==' ')
           {
               count++;
                if(count==fn)
                   do {cout<<arr1[i+1]; i++;}
                            while(arr1[i+1]!='\n' || arr1[i+1]!=' ');
                   /* {   i=i+1;
                        while(arr1[i]!=' ' || arr1[i]!= '\n')
                            cout<<arr1[i++];
                        cout<<endl;    
                    }*/
           }

            if(arr1[i]=='\n')
            {
                count=0;
                break;
            }

       } 
     //cout<<arr1;
 }
 fio.close();
 
}