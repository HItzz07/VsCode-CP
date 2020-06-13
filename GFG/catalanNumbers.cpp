//using binomial coefficient method to solve in O(n) time
#include<bits/stdc++.h>
using namespace std;


long long int binomialCoeff(int n , int k){

    long long int res = 1;

    //since C(n , k) = C( n , n-k )
    if(k > n-k)
        k=n-k;
     
    //calculating the coefficient 
        for(int i=0 ; i<k ; i++){
            res *= (n-i);
            res /= (i+1);
        }
    return res;
}

long long int catalan(int n){
    long long int c = binomialCoeff(2*n , n);
    
    return c/(n+1);
}

int main(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<catalan(i)<<endl;
    }

    return 0;
}






























//using dp but O(n2) time
// #include<bits/stdc++.h>
// using namespace std;


// long long int catalan(int n){

//     long long int catal[n+1];

//     catal[0]=catal[1]=1;

//     for(int i=2;i<=n;i++){
//         catal[i] = 0;
//         for(int j=0;j<i;j++){
//             catal[i] += catal[j]*catal[i-j-1];
//         } 
//     }

//     return catal[n];
// }

// int main(){

//     int n;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         cout<<catalan(i)<<endl;
//     }

//     return 0;
// }






























//recursive solution
// #include<bits/stdc++.h>
// using namespace std;


// long int catalan(int n){

//     if(n<=1){
//         return 1;
//     }

//     long int res = 0;
//     for(int i=0;i<n;i++){
//         res+= catalan(i)*catalan(n-i-1);
//     }

//     return res;
// }

// int main(){

//     int n;
//     cin>>n;

//     for(int i=1;i<n;i++){
//         cout<<catalan(i)<<endl;

//     }

//     return 0;
// }