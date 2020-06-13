#include<bits/stdc++.h>
using namespace std;
 int par[100001];

int find(int n){
    if(par[n] < 0) return n;
    else return par[n] = find(par[n]); 
}

void merge(int a , int b){
    par[a] = min(par[a] , par[b]); //here making a as parent ans giving it max -ve value so its abs value will be max positive value
                                   //since merge opr takes place between two parents so we find the parent of the resp node which we are going to merge         
    par[b] = a;
}

 int main(){
     int n,m,a,b,q,x,y;
     cin>>n>>m;

    for(int i=1;i<=n;i++) par[i] = -i;
    //here in this problem no of element in a set doesn't matter so we have to store max element of that set in par 

     while(m--){
         cin>>a>>b;
         //here a b are directed as b ----> a
        a = find(a);
        b = find(b);

        if(a != b) merge(a,b); 
     }

     cin>>q;
     while(q--){
         cin>>a>>b;
         x = a;
         y = b;

         a = find(a) , b = find(b);
         if(a == b) cout<<"TIE\n";    //this means that a and b have same parent has no need to fight    
         else{
             if(par[a] < par[b])
                cout<<x<<endl;  // x contains a as par[a] has higher min value and hence higher abs max value
              else cout<<y<<endl;  
         }   
     }


 }