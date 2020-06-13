#include<bits/stdc++.h>
using namespace std;
 
int main ()
{
    int x,y;
    cin>>x>>y;
    int powerY = y,power = 1 ,loopCount=0;
    
    while (powerY < x)
    {
        powerY <<= 1;
        power <<= 1;
        loopCount++;
    }
 
    int quotient=0;
    while (powerY > 0)
    {
        powerY >>= 1;
        power >>= 1;
        cout<<power<<endl;
        if (x >= powerY)
        {
            x -= powerY;
            quotient += power;
        }
    }
 
    // cout<<"loopCount = " << 2*loopCount<<endl;
    cout<<quotient<<endl;
}