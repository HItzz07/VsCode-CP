#include<bits/stdc++.h>
using namespace std;
int maxi,mini;
// https://codeforces.com/contest/1355/problem/B
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    multiset <int > mt1;
        vector <int > cnt(n);

        while(n--){
            int val;
            cin>>val;
            mt1.insert(val);
            // m1[val]++;
        }
        multiset <int >:: iterator it;
        it = mt1.begin();
        int i=0;
        
        while (it != mt1.end())
        {   int ct = *it;
            int vt = *it;

            cout<<" vt "<<vt<<endl;
            while(ct--){
                if(*it <= vt )
                 cnt[i]++;
                it++;
            }
            i++;
        }
        for(int i = 0; i< cnt.size() ; i++ ){
            cout<<cnt[i]<<" ";
        }
    }

    
}