#include<bits/stdc++.h>
using namespace std;
int power (int a, int b)
{    int result = 1;
    while (b != 0)
    {
        if ((b&1) != 0)
           result *= a;
        b = b>>1;
        a = a*a; // Imp: self multiplication doubles the power of 'a'
    }
    return result;
}

int main(){
    cout<<power(2,5)<<endl;
}