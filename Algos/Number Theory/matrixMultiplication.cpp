#include<bits/stdc++.h>
using namespace std;
#define N 101
#define prime 1000000007
#define fo(i,n) for(int i=1;i<=n;i++)
int arr[N][N] , I[N][N];

void mul(int A[][N] , int B[][N] , int dim){
    int res[dim+1][dim+1];

    fo(i,dim){
        fo(j,dim){
            res[i][j] = 0; 
            fo(k ,dim){
                res[i][j] += A[i][k] * B[k][j] ; 
            }
        }
    }

    fo(i,dim) fo(j,dim) A[i][j] = res[i][j];
}

void power(int A[][N] , int dim , int n){
    fo( i ,dim) fo(j,dim) {
        if(i == j) I[i][j] =1;
        else I[i][j] = 0;
    }//initialized identity matrix

    //limear multiplication and takes O(M^3 * N) time
    // fo(i , n)
    //     mul(I , A , dim);

    //O(M^3 * log(N)) by using binary exponentiation
    while(n ){
        if(n%2 == 1) 
            mul(I,A,dim) ,n--;  //I = I * A
        else
            mul(A,A,dim) , n/=2;    //A = A * A
    }

    //I contains the final result

    fo(i,dim) fo(j,dim) A[i][j] = I[i][j];

}

void printMat(int A[][N] , int dim){
    fo(i,dim){
        fo(j ,dim){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
     int t, dim,n;
     cin>>t;
     while(t--){
         cin>>dim>>n;
         fo(i,dim) fo(j,dim) cin>>arr[i][j];

         power (arr , dim, n);
         printMat(arr ,dim);
     }
}