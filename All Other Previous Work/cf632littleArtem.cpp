/*
A. Little Artem
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Young boy Artem tries to paint a picture, and he asks his mother Medina to help him. Medina is very busy, that's why she asked for your help.

Artem wants to paint an n×m board. Each cell of the board should be colored in white or black.

Lets B be the number of black cells that have at least one white neighbor adjacent by the side. Let W be the number of white cells that have at least one black neighbor adjacent by the side. A coloring is called good if B=W+1.

The first coloring shown below has B=5 and W=4 (all cells have at least one neighbor with the opposite color). However, the second coloring is not good as it has B=4, W=4 (only the bottom right cell doesn't have a neighbor with the opposite color).


Please, help Medina to find any good coloring. It's guaranteed that under given constraints the solution always exists. If there are several solutions, output any of them.

Input
Each test contains multiple test cases.

The first line contains the number of test cases t (1≤t≤20). Each of the next t lines contains two integers n,m (2≤n,m≤100) — the number of rows and the number of columns in the grid.

Output
For each test case print n lines, each of length m, where i-th line is the i-th row of your colored matrix (cell labeled with 'B' means that the cell is black, and 'W' means white). Do not use quotes.

It's guaranteed that under given constraints the solution always exists.

Example
inputCopy
2
3 2
3 3
outputCopy
BW
WB
BB
BWB
BWW
BWB
Note
In the first testcase, B=3, W=2.

In the second testcase, B=5, W=4. You can see the coloring in the statement.


*/

#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;

  for(int i=0;i<t;i++){
      int n,m;
      int mul,c1,c2;
      mul=n*m;
      /*if(mul%2==0){
          c1=(mul/2)+2;
          c2=mul-c1;
      }
      else{
          c2=mul/2;
          c1=mul-c2;
      }*/
      cin>>n>>m;
      int c11=0,c21=0;
      for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
              

          }
      }
  }

}