#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main(){
    char ch1[82];
    
    cin.get(ch1,82);
    int l = strlen(ch1);
    int rowL,colL;
    double temp = sqrt(l); 

    rowL = floor(temp);
    colL = ceil(temp);

    if(l > (rowL*colL)){
        rowL++;
    }

    int tmp=l;
    while(tmp != (rowL * colL)){
        ch1[tmp] = '\0';
        tmp++;
    }

   char ch2[rowL][colL];

    int k=0;
    for(int i=0;i<rowL;i++){
        for(int j=0;j<colL;j++){
            ch2[i][j] = ch1[k++];
        }
    }

    int count=0;
    if((rowL*colL) != l)
      { 
        for(int i=0;i<colL;i++){
            int j=0;
            int count=0;
            
            while(ch2[j][i] != '\0'){
                cout<<ch2[j][i];
                j++;
                count=1;
            }

            if(i!=(colL-1) && (count == 1)){
                cout<<' ';
                count=0;
            }
        }
      }  
      
      else{
          for(int i=0;i<colL;i++){
            int j=0;
            while(j != rowL){
            cout<<ch2[j][i];
            j++;
            }
            
            if(i!=(colL-1))
                cout<<' ';
      }
    }
}