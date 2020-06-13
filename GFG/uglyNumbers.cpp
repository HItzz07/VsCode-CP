#include<bits/stdc++.h>
using namespace std;


int getUglyNumber(int n){

    int ugly[n];
    ugly[0] = 1;
    int i2=0,i3=0,i5=0;
    int next_multiple_of_2 = 2;
    int next_multiple_of_3 = 3;
    int next_multiple_of_5 = 5;
    int nextUglyNo = 1;
    for(int i=1 ; i<n ;i++){
        nextUglyNo = min( next_multiple_of_2 , min(next_multiple_of_3 , next_multiple_of_5 ) );
        ugly[i]= nextUglyNo;

        if(nextUglyNo == next_multiple_of_2){
            i2++;
            next_multiple_of_2 = ugly[i2]*2;
        }
        if(nextUglyNo == next_multiple_of_3){
            i3++;
            next_multiple_of_3 = ugly[i3]*3;            
        }
        if(nextUglyNo == next_multiple_of_5){
            i5++;
            next_multiple_of_5 = ugly[i5]*5;
        }
    }

return nextUglyNo;

}

int main(){
    int n;
    cin>>n;
    cout<<getUglyNumber(n)<<endl;
    return 0;
}








// #include<bits/stdc++.h>
// using namespace std;

// int maxDivide(int num, int div){
//     while( num % div == 0){
//         num = num / div;
//     }
//     return num;
// }


// int isUglyNum(int num){

//     num = maxDivide(num , 2);
//     num = maxDivide(num , 3);
//     num = maxDivide(num , 5);
    
//     return (num==1)?1:0; 
// }

// int findUglyNumbers(int n){
    
//     int i=1,count=1;

//     while(n > count){
//         i++;
//         if(isUglyNum(i)){
//             count++;
//         }
//     }
    
//     return i;
// }

        

// int main(){
//  int n;
//  cin>>n;
//  int num = findUglyNumbers(n);
//     cout<<num<<endl;


// }

