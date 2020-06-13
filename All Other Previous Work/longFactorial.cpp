#include<bits/stdc++.h>
using namespace std;
#define MAX 500

void factorial(int n){
    int result[MAX];
    result[0]=1;
    int result_size=1;
    for(int i=2;i<n;i++){
        int carry=0;

        for(int j=0;j<result_size;j++){
            int prod = i*result[j] + carry;
            result[j]=prod%10;
            carry = prod/10;
        }
        
        while(carry){
            result[result_size] = carry%10;
            carry=carry/10;
            result_size++;
        }
    }
    cout<<"Factorial of given number:-";
    for(int i = result_size-1 ; i >= 0 ; i--){
        cout<<result[i];
    } 

}

int main(){
    int n;
    cin>>n;
    factorial(n+1);

}