#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("example.txt");
    char arr[50];
    string str;
    while(!fin.eof())
    {
        arr[0]=fin.get();
        
        cout<<arr[0];

        //fin>>arr[0];
        //arr[0]=fin.get();

    } 
    fin.close();   

 }
