/*
What is an Upside-Down Number?
An upside down number is an integer that appears the same when rotated 180 degrees, as illustrated below.

Python Solution
def upsidedown(x,y):
    ans=0
    for x in range(int(x),int(y)):
        add=0
        x=str(x)
        a=x[::-1]
        for i in range(len(x)):
            q={'2','3','4','5','7'}
            if (set(a).intersection(set(q))):
                break
            else:
                if (len(x)==1) and (int(x)!=6) and (int(x)!=9):
                    ans+=1
                elif (x[i]=="6" and a[i]=="9") or (x[i]=="9" and a[i]=="6") or (x[i]==a[i]):
                    add+=1
        if add==len(x) and len(x)!=1:
            ans+=1
    return ans
x=input()
y=input()
print(upsidedown(x,y))

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x,y,count=0;
        cin>>x>>y;
        if(x==0 && y<=10){}
    }
}