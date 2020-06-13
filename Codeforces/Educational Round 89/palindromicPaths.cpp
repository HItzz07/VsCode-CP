#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)

int main(){
    int t,n,m,x,y,ans = 0 ;
    cin>>t;
    while(t--){
        ans = 0;
        cin>>n>>m;
        int arr[n][m] , zeroes[(m-1)+(n-1) + 1], ones[(m-1)+(n-1) + 1];  //the size of zeroes and ones are max sum of two elements + 1 or m + n - 1
        memset(ones , 0 , sizeof(ones));
        memset(zeroes , 0 , sizeof(zeroes));

        fo(i,n){
            fo(j,m){
                cin>>arr[i][j];
                if(arr[i][j] == 0) zeroes[i+j]++;
                else ones[i+j]++;
            }
        }
        int v = ( (m-1) + (n-1) )/2;  //for palindrome we need to check upto middle so we are calculating middle

        fo(i,v+1){
            if(i != v || (m+n)%2 != 0){
                x = zeroes[i] + zeroes[(m-1) + (n-1) - i];
                y = ones[i] + ones[(m-1) + (n-1) - i];
                ans += min(x,y);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}