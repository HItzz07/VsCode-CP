//TODO //imp question 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
 
    while(t--){

        int n;
        cin>>n;
        int a[n+1];
        priority_queue <pair<int , pair< int , int > > > pq;  //here order is greater < int > automatically
        pq.push({ n, { -1 , -n}});   //here -1 is L and -n is R
        int count=1;
        while(!pq.empty()){
            
            int l = -pq.top().second.first;
            int r = -pq.top().second.second;
            pq.pop();

            int mid = ( l + r )/2;
            a[mid] = count++;

            if(l == r) continue;

            if( l < mid ){
                pq.push({mid - l, {-l , -(mid-1)}});        

            }

            if( r > mid ){
                pq.push({ r - mid ,  {  -(mid+1) , -r }});        

            } 

        }
        for(int i=1;i<=n;i++){
            cout<<a[i]<<" ";
        }  
        cout<<endl;
    }   
}



