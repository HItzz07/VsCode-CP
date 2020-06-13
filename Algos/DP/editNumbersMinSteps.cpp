// // https://www.youtube.com/watch?v=Thv3TfsZVpw&list=PLqM7alHXFySGbXhWx7sBJEwY2DnhDjmxm&index=7
// // https://www.geeksforgeeks.org/edit-distance-dp-5/
#include<bits/stdc++.h>
using namespace std;

int editDist(string str1 ,string str2 , int n1 , int n2){
    
    int dp[n1+1][n2+1];

    for(int i=0 ; i<= n1 ;i++){
        for(int j=0 ; j<= n2 ; j++){
            
            if(i == 0)  dp[i][j] = j;
            else if(j == 0) dp[i][j] = i;

            else if(str1[i-1] == str2[j-1])  dp[i][j] = dp[i-1][j-1];

            else{
                dp[i][j] = 1 + min(dp[i-1][j-1], min(dp[i-1][j] , dp[i][j-1]));
            } 
        }
    }

    for(int i=0 ; i<= n1 ;i++){
        for(int j=0 ; j<= n2; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    return dp[n1][n2];
}

int main(){

    string str1,str2;
    cin>>str1>>str2;

    cout<<editDist(str1 , str2 , str1.length() , str2.length())<<endl;

    return 0;
}





// A Space efficient Dynamic Programming 
// based C++ program to find minimum 
// number operations to convert str1 to str2 
//uses only two rows the current and the upper row to store and modify data
// #include <bits/stdc++.h> 
// using namespace std; 
// int editDist(string str1 ,string str2 , int n1 , int n2){
    
//     int dp[2][n2+1];

//     memset(dp, 0, sizeof dp); 
 
//     for (int i = 0; i <= n1; i++) 
//         dp[0][i] = i; 

//     for(int i=0 ; i<= n1 ;i++){
//         for(int j=0 ; j<= n2 ; j++){
            
//             if(j==0) dp[i%2][j] = i;

//             else if(str1[i-1] == str2[j-1])  dp[i%2][j] = dp[(i-1)%2][j-1];

//             else{
//                 dp[i][j] = 1 + min(dp[(i-1)%2][j-1], min(dp[(i-1)%2][j] , dp[i][j-1]));
//             } 
//         }
//     }

//     return dp[n2 % 2][n1];
// }

// int main(){

//     string str1,str2;
//     cin>>str1>>str2;

//     cout<<editDist(str1 , str2 , str1.length() , str2.length())<<endl;

//     return 0;
}  
