// https://codeforces.com/contest/1358/problem/D

//https://www.youtube.com/watch?v=JnGwOVE16-g     watch this video if you have problem
#include<bits/stdc++.h>
using namespace std;

int main(){
int n, days;
  cin >> n >> days;
  int A[2*n + 1];
  int pre1[2*n + 1] , pre2[2*n + 1 ];  //pre1 -> sum of value of days   pre2 -> sum of no of days
  for (int i = 1; i <= n; i++) {
    cin >> A[i];
    A[n+i] = A[i];
  }

  pre1[0] = pre2[0] = A[0] = 0;

  for(int i=1 ; i <=2*n ;i++){
    pre1[i] = pre1[i-1] + (( A[i] * (A[i] + 1 )) / 2) ;  //sum pof values of days
    pre2[i] = pre2[i-1] + A[i];                            //sum of number of days
  }

   long long int maxI = 0;

  //starting from last we will do our binary search
  for(int i = 2*n ; i >=n+1 ; i--){
    int low = 1;
    int high = i;
    int ans = i;

    while(low <= high){
      int mid = (low + high) / 2;

      if(pre2[i] - pre2[mid] < days){
        ans = mid;
        high = mid-1;
      }

      else low = mid+1;
    }

    long long int temp = pre2[i] - pre2[ans - 1] - days;
    long long int sum = pre1[i] - pre1[ans-1];
    sum-=(temp * (temp + 1) ) / 2;
    maxI = max(maxI , sum);
  }

  cout<<maxI<<endl;

}