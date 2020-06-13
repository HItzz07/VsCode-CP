// If activities are Not sorted according to finish time  //O(nlogn)
#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)

void printMaxActivities(int s[] , int f[] , int n){
    //first activity always get selected
    int i=0;
    cout<<"Selected Activities are:- ("<<s[i]<<","<<f[i]<<") , ";

    //considering the rest of the activities
    for(int j=1;j<n;j++){
        if(s[j] >=f[i]) {cout<<"("<<s[j]<<","<<f[j]<<") , " , i=j;}
    }
}

int main(){
    cout<<"Enter total no of activities:-";
    int n; cin>>n;
    int s[n],f[n];

    cout<<"Enter the start times\n";
    fo(i,n) cin>>s[i];

    cout<<"Enter the finish times\n";
    fo(i,n) cin>>f[i];

    fo(i,n-1){
        if(f[i] > f[i+1]){
            int temp = f[i], temp1 = s[i];
            f[i] = f[i+1] ,s[i] = s[i+1] ;
            f[i+1]  = temp , s[i+1] = temp1;
        }
    } 

    // fo(i,n) cout<<s[i]<<" "<<f[i]<<endl;

    printMaxActivities(s,f,n);
    return 0;
}





















//If activities are sorted according to finish time   O(n)
// #include<bits/stdc++.h>
// using namespace std;
// #define fo(i,n) for(int i=0;i<n;i++)

// void printMaxActivities(int s[] , int f[] , int n){
//     //first activity always get selected
//     int i=0;
//     cout<<"Selected Activities are:- "<<i<<" ";

//     //considering the rest of the activities
//     for(int j=1;j<n;j++){
//         if(s[j] >=f[i]) {cout<<j<<" "; i=j;}
//     }
// }
// int main(){
//     cout<<"Enter total no of activities:-";
//     int n; cin>>n;
//     int s[n],f[n];

//     cout<<"Enter the start times\n";
//     fo(i,n) cin>>s[i];

//     cout<<"Enter the finish times\n";
//     fo(i,n) cin>>f[i];

//     printMaxActivities(s,f,n);
//     return 0;
// }
