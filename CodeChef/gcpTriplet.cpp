// https://www.hackerrank.com/challenges/count-triplets-1/problem?h_r=internal-search
// https://www.codechef.com/submit/GPTRIPLE
#include<bits/stdc++.h>
#define lli long long int  
using namespace std;

int main(){
    int n,k,val;
    cin>>n>>k;
    map <int , int> mr, ml;
    vector <int > v1(n);
    for(int i=0;i<n;i++){
        cin>>v1[i];
        mr[v1[i]]++;
    }
    //we will use concept of a/r,a,ar
    lli total = 0;
    for(int i=0;i<n-1;i++){
        
        int a = v1[i]; 
        if(ml.size() != 0)
        {
            mr[a]--;
            if((ml[a/k] !=0 && (a % k == 0)) && (mr[a*k] != 0)){
                cout<<ml[a/k]<<"  "<<mr[a*k]<<endl;
                total += ml[a/k]*mr[a*k];
            }
        }
        else{
            mr[a]--;
        }
        ml[a]++;
    }
    // for(auto it1 = mr.begin() , it = ml.begin() ; it != ml.end() , it1 != mr.end()  ;it++,it1++){
    //     cout<<it->first<<"  "<<it->second<<"  "<<it1->first<<"  "<<it1->second<<endl;
    // }
    cout<<total<<endl;
}

