//Using Memoization
#include<bits/stdc++.h>
using namespace std;

int binomialCoeffUtil(int n , int k , int **dp){
    if(dp[n][k] != -1)  return dp[n][k];

    if(k==0){
        dp[n][k] = 1;
        return dp[n][k];
    }

    if(k == n ){
                dp[n][k] = 1;
        return dp[n][k];
    }

    dp[n][k] = binomialCoeffUtil(n-1 , k-1 , dp) + binomialCoeffUtil(n-1 , k ,dp);

return dp[n][k];
}
int binomialCoeff(int n , int k){

    int **dp;  //make a temporary lookup table
    dp = new int *[n+1]; 

    //loop to create table dynamically
    for(int i=0;i< n+1 ; i++){
        dp[i] = new int[k+1];
    }

    //nested loop to initialize the table with -1
    for(int i=0 ; i<(n+1) ; i++){
        for(int j=0 ; j<(k+1) ; j++){
            dp[i][j] = -1;
        }
    }
return binomialCoeffUtil(n,k,dp);

}

int main(){
    int n,k;
    cin>>n>>k;
    cout<<"Value of C("<<n<<","<<k<<") is "<<binomialCoeff(n,k);
    return 0;
}












// //space optimized version  O(K)
// #include<bits/stdc++.h>
// using namespace std;

// int binomialCoeff(int n , int k){
//     int c[k+1];
//     memset(c , 0 , sizeof(c)); //initialize arr c with 0

//     c[0] = 1;

//     for(int i=1;i<=n;i++){
//         for(int j = min(i,k) ; j > 0 ; j--){  //suppose we have to find out 5C3 but on calculating its sub problems eg:- 2C1 here k=1 and it does not go beyond 2(max);                    
//             c[j] = c[j] + c[j-1];
//         }
//     }
//     return c[k];
// }

// int main(){
//     int n,k;
//     cin>>n>>k;
//     cout<<"Value of C("<<n<<","<<k<<") is "<<binomialCoeff(n,k);
//     return 0;
// }










//DP bottom up
// Time Complexity: O(n*k)
// Auxiliary Space: O(n*k)
// https://www.youtube.com/watch?v=3D_Oj16EtD8&list=PLqM7alHXFySGbXhWx7sBJEwY2DnhDjmxm&index=8
// #include<bits/stdc++.h>
// using namespace std;

// int binomialCoeff(int n , int k){
//     int c[n+1][k+1];
//     int i,j;

//     for(i=0;i<=n;i++){
//         for(j= 0;j<=min(i,k);j++){  //suppose we have to find out 5C3 but on calculating its sub problems eg:- 2C1 here k=1 and it does not go beyond 2(max);

//             if(j == 0 || j == i)
//                 c[i][j] = 1;

//             else
//                 c[i][j] = c[i-1][j-1] + c[i-1][j];
                    
//         }
//     }
//     return c[n][k];
// }

// int main(){
//     int n,k;
//     cin>>n>>k;
//     cout<<"Value of C("<<n<<","<<k<<") is "<<binomialCoeff(n,k);
//     return 0;
// }












//recursive
// #include<bits/stdc++.h>
// using namespace std;

// int binomialCoeff(int n , int k){
//     if(k==0 || k==n){
//         return 1;
//     }

//     return binomialCoeff(n-1 , k-1) + binomialCoeff(n-1 , k); 
// }

// int main(){
//     int n,k;
//     cin>>n>>k;
//     cout<<"Value of C("<<n<<","<<k<<") is "<<binomialCoeff(n,k);
//     return 0;
// }