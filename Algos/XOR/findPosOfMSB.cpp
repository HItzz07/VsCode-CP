#include<bits/stdc++.h>
using namespace std;

void findPositionOfMSB (int n) 
{
    int high=31, low=0;
 
    while (high - low > 1)
    {
        int mid = (high+low)/2;
        int maskHigh = (1 << high) - (1 << mid);
        if ((maskHigh & n) > 0)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }
    cout<<": MSB at " << low <<". Between " << (int)pow(2, low)<< " and " << (int)pow(2, low+1);
}