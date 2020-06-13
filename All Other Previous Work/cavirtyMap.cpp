#include<bits/stdc++.h>
using namespace std;

#define MAX 101

int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        int j=0;
        char string[MAX];
        cin>>string;
        
        while(string[j]){
                arr[i][j] = (int)string[j]-48;
                j++;
        }
    
        }
        // int temp;
        // cin>>temp;
        // int j=n-1;
        // while(temp>0){
        //     arr[i][j--] =temp%10;
        //     temp=temp/10; 
        // } 

    for(int i=1;i<n-1;i++){
        for(int j=1;j<n-1;j++){
            if((arr[i][j] > arr[i-1][j]) && (arr[i][j] > arr[i+1][j]) && (arr[i][j] > arr[i][j-1]) && (arr[i][j] > arr[i][j+1])){
                arr[i][j] = 11;

            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] == 11){
                cout<<"X";
            }
            else{
                cout<<arr[i][j];
            }
        }
        cout<<endl;
    }
}