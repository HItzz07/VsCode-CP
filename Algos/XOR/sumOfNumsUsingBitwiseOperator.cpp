// https://prismoskills.appspot.com/lessons/Bitwise_Operators/Sum_using_only_bitwise_ops.jsp

#include<bits/stdc++.h>
using namespace std;
int reverseBits(int x){
    x = ((x & 0x0000FFFF) << 16) | ((x & 0xFFFF0000) >> 16);
    cout<<x<<endl;
    
    x = ((x & 0x00FF00FF) << 8) | ((x & 0xFF00FF00) >> 8);
    cout<<x<<endl;
    
    x = ((x & 0x0F0F0F0F) << 4) | ((x & 0xF0F0F0F0) >> 4);
    cout<<x<<endl;
    
    x = ((x & 0x33333333) << 2) | ((x & 0xCCCCCCCC) >> 2);
    cout<<x<<endl;
    
    x = ((x & 0x55555555) << 1) | ((x & 0xAAAAAAAA) >> 1);
    return x;
}

int main(){
    cout<<reverseBits(1073741824)<<endl;
}

// public class AddingWithBitwiseOps 
// {
 
//     public static void main(String[] args) 
//     {
//         int i = (int)(Math.random()*16);
//         int j = (int)(Math.random()*16);
//         System.out.println(add (i, j));
//     }
 
 
//     static int add(int i, int j) 
//     {
//         // Debug code
//         printBinary(i);
//         printBinary(j);
//         System.out.println();
        
//         // Actual algorithm
//         int uncommonBitsFromBoth = i ^ j;
//         int commonBitsFromBoth   = i & j;
        
//         if (commonBitsFromBoth == 0)
//             return uncommonBitsFromBoth;
        
//         return add (
//             uncommonBitsFromBoth, 
//             commonBitsFromBoth << 1
//         );
//     }
 
 
//     static void printBinary(int num) 
//     {
//         int n = num;
//         String s = "";
//         for (int i=0; i<8;i++)
//         {
//             s = (n&1) + s;
//             n = n >gt;>gt; 1;
//         }
//         System.out.println(num + " = " + s);
//     }
// }
 