#include<iostream>
using namespace std;
int x,y,d,x1,y1,x2,y2,dx,dy,ds,dt;
int setPixel(int x1,int y1){
    
    
    //In this case 1>m>0
    dx=x2-x1,dy=y2-y1;
    dt=2*(dy-dx);
    ds=2*dy;
    d=2*dy - dx;
    cout<<"d="<<d<<endl;
    }

int main()
{
    
    cout<<"Enter the coordinates of the two points";
    cin>>x1>>y1>>x2>>y2;
     x=x1,y=y1;   
    setPixel(x,y);
    int v,b;
    while(x<x2)
    {
        x++;
        if(d<0)
            d=d+ds;
            

        else
            {
                y++;
                d=d+dt;

            }
            setPixel(x,y);
    }
cout<<"x="<<x<<" "<<"y="<<y<<"  "<<"d="<<d;


}