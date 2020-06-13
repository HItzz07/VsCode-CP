#include<bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        long long  a ,b,c,d , diff;
        long long count=0;
        long long   sleep_he_got = 0 ;
        cin>>a>>b>>c>>d;
        diff = c-d;
        
        if(a <= b  ){
            cout<<b<<'\n';
        }

        else{
        sleep_he_got = a - b;

            diff = c-d;
            if(diff> 0){   
                int extra = 0;
                if(sleep_he_got & 1 )    //condition for odd number    
                {
                    if((sleep_he_got + 1)%diff != 0){
                        extra = 1;
                    }
                    count  =  (sleep_he_got + 1) /diff  + extra;
                }
                else{
                    
                    if(sleep_he_got %diff != 0){
                        extra = 1;
                    }
                        count  =  sleep_he_got / diff + extra;
                }

                sleep_he_got =  count*c + b;
                cout<<sleep_he_got<<'\n';
            }

            else{
                cout<<-1<<'\n';
            }    
        }
         
    }
        
        
    }
    

                // while(sleep_he_got < a){
                //     // cout<<sleep_he_got<<endl;
                //     sleep_he_got += diff;
                //     count++;
                // }



               