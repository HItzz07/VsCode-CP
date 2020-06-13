#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int y=0;y<t;y++){
        int n,q;
        cin>>n>>q;
        char str[n];
        cin>>str;
        int count[26];
        
        for(int k=0;k<26;k++){
                count[k]=0;
            }


        int k=0;
        while(str[k]){
            int temp = int(str[k]);
            int org=temp - 97;
            count[org]++;
            k++;
        }
        

        for(int i=0;i<q;i++){
            int c,sum=0;
            cin>>c;
            int subsCount[26];

            for(int k=0;k<26;k++){
                subsCount[k] = count[k];
            }            
            

            for(int j=0;j<26;j++){
                    if(subsCount[j]>=c)
                            {subsCount[j]-=c;}
                        else{subsCount[j] = 0;}    
                        sum+=subsCount[j];
            }

        cout<<sum<<endl;     
        }
                
    }     
 }


































// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     for(int y=0;y<t;y++){
//         int n,q;
//         cin>>n>>q;
//         char sIso[n];
//         cin>>sIso;

//     for(int i=1;i<n;i++){
//         for(int j=0;j<n-i;j++)
//             if(sIso[j]>sIso[j+1])
//             {
//             char ch=sIso[j];
//             sIso[j] = sIso[j+1];
//             sIso[j+1]=ch;
//             }
//     }    

//     int length=0;
//     for(int i=0;i<n;i++){
//         if(sIso[i]== sIso[i+1]){
//             continue;
//         }
//         else{
//             length++;
//         }
//     }

//     int arr[length];

//     for(int i=0;i<length;i++){
//         arr[i]=1;
//     }

//     int r=0;
//     for(int i=0;i<n-1;i++){
//         if(sIso[i]==sIso[i+1]){
//             arr[r]++;
//         }
//         r++;
//     }
//     //cout<<length;

//     int max=0;

//     for(int i=0;i<length;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }


//         for(int u=0;u<q;u++){
//             int c;
//             int sum=0;
//             cin>>c;
//             if(max == c){
//                 cout<<(int)0<<endl;
//             }
//             else{
//                 for(int i=0;i<n;i++){
//                     arr[i]-=c;
//                 }
                
//                 for(int i=0;i<length;i++){
//                     sum+=arr[i];
//                 }
//             }
//             cout<<sum;
//         }


//     }

// }










// //TO count distinct no of chars using O(n)

// //         int CountUniqueCharacters(char* str){
// //             int count = 0;

// //         for (int i = 0; i < strlen(str); i++){
// //          bool appears = false;
// //          for (int j = 0; j < i; j++){
// //               if (str[j] == str[i]){
// //                   appears = true;
// //                   break;
// //               }
// //          }

// //          if (!appears){
// //              count++;
// //          }
// //     }

// //     return count;
// // }
