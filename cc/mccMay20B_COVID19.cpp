#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    for(int y=0;y<t;y++){
        int n;
        cin>>n;
        int arr[n];
        int count[n];
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
            count[i] = 1;
        }
        

        int k=-1,counter=0,j=0;
        for(int i=0;i<n;i++){
            if(abs(arr[j] - arr[j+1])<=2)
            {
                k++;
            }
            while(abs(arr[j] - arr[j+1])<=2  && j != n-1){
                count[k]++;
                j++;
                counter++;
                //cout<<k<<" "<<arr[j]<<" "<<arr[j+1]<<endl;
            }
            if(j == n-1){
                break;
            }
            
            j++;    
        }
        
        
        int min = 999999999,max=0;
         int sum=0;
        if(k==0){
            if(counter==n-1){
                min=count[0];
            max=count[0];
            }
            else{
                max=count[0];
                min=1;
            }
            
        }
       
        else{
            if(k>0){
                for(int i=0;i<=k;i++){
                    if(count[i]>max){
                        max=count[i];
                    }
                    if(count[i]<min){
                        min=count[i];
                    }
                    sum+=count[i];   
                }
                if(sum != n){
                    min=1;
                }
            }
            else if(k<0){
                min=1;max=1;
            }

        }
        

        cout<<min<<" "<<max<<endl;
    }

}
