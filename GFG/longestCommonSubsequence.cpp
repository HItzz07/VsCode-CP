// https://www.youtube.com/watch?v=HgUOWB0StNE&list=PLqM7alHXFySGbXhWx7sBJEwY2DnhDjmxm&index=6
// https://www.geeksforgeeks.org/longest-common-subsequence-dp-4/
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1, str2;

    cin>>str1>>str2;
    int n1,n2;
    n1=str1.size() , n2 = str2.size();

    vector< vector< int > > lcs( n1+1 , vector<int >(n2+1) );
    //created vector so that the first row and first column will always contain zero as that's our rqrment

    for(int i=1;i<=n1;i++){
        for(int j=1;j<=n2;j++){
            if(str1[i-1] == str2[j-1] ){
                lcs[i][j] = lcs[i-1][j-1] + 1;
            }

            else{
                lcs[i][j] = max(lcs[i-1][j] , lcs[i][j-1]);
            }
        }
    }


    for(int i=0;i<=n1;i++){
        for(int j=0;j<=n2;j++){
            cout<<lcs[i][j]<<" ";
        }
        cout<<endl;
    }
    int max = lcs[n1][n2];
    cout<<max<<endl;
}
