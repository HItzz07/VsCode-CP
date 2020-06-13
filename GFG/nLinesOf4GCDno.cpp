// Print N lines of 4 numbers such that every pair among 4 numbers has a GCD K

#include<bits/stdc++.h>
using namespace std;

void printLines(int n , int k){
        // Iterate N times to print N lines 
    for (int i = 0; i < n; i++) { 
        cout << k * (6 * i + 1) << " "
             << k * (6 * i + 2) << " "
             << k * (6 * i + 3) << " "
             << k * (6 * i + 5) << endl; 
    }

    //it follows base condition 1 2 3 5 an after that changing each no to corresponding even/odd before multiplying it with k
    // the pattern here is odd even odd odd   
}

int main(){
    int n,k,count=0;
    cin>>n>>k;
    printLines(n,k);
    return 0;

}