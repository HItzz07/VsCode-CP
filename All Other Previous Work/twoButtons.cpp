/*
    Vasya has found a strange device. On the front panel of a device there are: a red button, a blue button and a display showing some positive integer. After clicking the red button, device multiplies the displayed number by two. After clicking the blue button, device subtracts one from the number on the display. If at some point the number stops being positive, the device breaks down. The display can show arbitrarily large numbers. Initially, the display shows number n.

    Bob wants to get number m on the display. What minimum number of clicks he has to make in order to achieve this result?

    Input

    The first and the only line of the input contains two distinct integers n and m (1 ≤ n, m ≤ 104), separated by a space .

    Output

    Print a single number — the minimum number of times one needs to push the button required to get the number m out of number n.

    Sample Input
    4 6
    Sample Output
    2


    Sample Input 2
    10 1
    Sample Output 2
    9


    Note:

    In the first example you need to push the blue button once, and then push the red button once.

    In the second example, doubling the number is unnecessary, so we need to push the blue button nine times.
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,count=0;
    cin>>n>>m;
    if(n>m){
        while(n!=m){
            n--;
            count++;
        }
        
    }
    //TODO
    else{
         if(n>m/2){
             do{
                 n--;
                 count++;
                 if()
                 n=n*2;
                 
             }
             while(n!=m);
         }

        }
    
}