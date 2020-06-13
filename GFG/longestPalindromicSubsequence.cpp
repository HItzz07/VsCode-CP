//DP Solution
// https://www.youtube.com/watch?v=TLaGwTnd3HY&list=PLqM7alHXFySGbXhWx7sBJEwY2DnhDjmxm&index=12
#include<bits/stdc++.h>
using namespace std;

int lps(string str){

    int n = str.size();
    int i,j,cl;

    int L[n][n];

    for(int i=0 ; i< n ; i++){
        L[i][i] = 1;
    }

    for(cl = 2 ; cl <= n ; cl++ ){
        for(int i=0 ; i<n-cl+1 ; i++){
            j=cl+i-1;
            if (str[i] == str[j] && cl == 2) 
                L[i][j] = 2; 
            else if (str[i] == str[j]) 
               L[i][j] = L[i+1][j-1] + 2; 
            else
               L[i][j] = max(L[i][j-1], L[i+1][j]);
        }
    }
    return L[0][n-1];
}

int main(){
    string str;
    cin>>str;

    cout<<lps(str);

}


















//Recursive Solution
// #include<bits/stdc++.h>
// using namespace std;

// int lps(string str , int s , int e){
//    if(s == e) return 1;
//    if((str[s] == str[e]) && ( (s + 1) == e) ) {
//        return 2;
//    }

//    if((str[s] == str[e])){
//        return lps(str , s+1 , e-1) + 2;
//    }

//    return max(lps(str , s , e-1) , lps(str , s-1 , e));

// }

// int main(){
//     string str;
//     cin>>str;

//     cout<<lps(str , 0 , str.size()-1);

// }