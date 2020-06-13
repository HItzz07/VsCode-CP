#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int area1, sideOfSquare;
        int maxElement = max(a,b);

        if(a >= b){
            // sideOfSquare = 2*a;
            if(2*b >= a){
                sideOfSquare = 2*b;
            }
            else if(2*b < a){
                sideOfSquare = a;
            }

        }
        else {
            if(2*a >= b){
                sideOfSquare = 2*a;
            }
            else if(2*a < b){
                sideOfSquare = b;
            }

        }

        cout<<(sideOfSquare * sideOfSquare)<<endl;

        
    }
}






















// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int a,b;
//         cin>>a>>b;
//         int area1, sideOfSquare;
//         int maxElement = max(a,b);

//         if(a == b){
//             sideOfSquare = 2*a;
//         }

//         else{

//             double val;
//             area1 = a*b*2;  //including areas of both
//             val = (double)area1;
//             if(sqrt(area1) - floor(sqrt(area1)) == 0 ){
//                 sideOfSquare = sqrt(area1);

//             }
//             else{

//             sideOfSquare = floor(sqrt(area1))+1;
//             }
//         }

//         if(sideOfSquare < maxElement){
//             sideOfSquare = maxElement;        
//         }

//         cout<<(sideOfSquare*sideOfSquare)<<endl;
//     }

// }