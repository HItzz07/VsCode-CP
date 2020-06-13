// // A O(n) solution that uses table fact[] to calculate the Permutation Coefficient 
// #include<bits/stdc++.h> 
// // Returns value of Permutation Coefficient P(n, k) 
// int permutationCoeff(int n, int k) 
// { 
//     int fact[n + 1]; 
  
//     // base case 
//     fact[0] = 1; 
  
//     // Calculate value  
//     // factorials up to n 
//     for (int i = 1; i <= n; i++) 
//         fact[i] = i * fact[i - 1]; 
  
//     // P(n,k) = n! / (n - k)! 
//     return fact[n] / fact[n - k]; 
// } 
  
// // Driver Code 
// int main() 
// { 
//     int n = 10, k = 2; 
//     printf ("Value of P(%d, %d) is %d ", 
//              n, k, permutationCoeff(n, k) ); 
//     return 0; 
// } 



// A O(n) time and O(1) extra space solution to calculate the Permutation Coefficient 
#include <iostream> 
using namespace std; 

int PermutationCoeff(int n, int k) 
{ 
	int P = 1; 

	// Compute n*(n-1)*(n-2)....(n-k+1) 
	for (int i = 0; i < k; i++) 
		P *= (n-i) ; 

	return P; 
} 

int main() 
{ 
	int n = 10, k = 2; 
	cout << "Value of P(" << n << ", " << k 
		<< ") is " << PermutationCoeff(n, k); 

	return 0; 
} 















// // https://www.geeksforgeeks.org/permutation-coefficient/
// //P(n , k) = n!/(n-k)!
// #include<bits/stdc++.h>
// using namespace std;
// int perm(int n, int k){
//    int P[n+1][k+1];
//     for(int i=0 ; i<=n;i++){
//         for(int j=0 ; j <= min(i,k) ; j++){
//             if(j==0)
//                 P[i][j] = 1;
//             else{
//                 P[i][j] = P[i-1][j] + (j* P[i-1][j-1]);
//              }    
            
//             // This step is important 
//             // as P(i,j)=0 for j>i 
//              P[i][j+1] = 0;
//         }
//     }
// return P[n][k];

// }

// int main(){
//     int n,k;
//     cin>>n>>k;
//     cout<<perm(n,k)<<'\n';
// }