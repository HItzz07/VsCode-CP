// A: Strip its decimal (i.e., truncate it) and print its hexadecimal representation (including the  0x prefix) in lower case letters.
// B: Print it to a scale of 2 decimal places, preceded by a + or - sign (indicating if it's positive or negative), right justified, and left-padded with underscores so that the printed result is exactly 15 characters wide.
// C: Print it to a scale of exactly nine decimal places, expressed in scientific notation using upper case.

#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;

    for (int i=0;i<t;i++){
        double a,b,c;
        cin>>a>>b>>c;
    
    //part A
        int aN  = (int)a;
        stringstream s;
        s << hex << aN ;

        string res = s.str();
        cout<<"0x"<<res<<endl;
    
    //part B
	// or we can use  this also     
    // cout<<setprecision(3)<<b<<endl;
    int n1 =int(b);
    int count = 0;
    while(n1>0){
        n1=n1/10;
        count++;
    }

    int count1 = 15-count-2-2;
    
    for(int k=0;k<count1;k++){
        cout<<"-";
    }
    if(b > 0){
        cout<<"+";
        cout << b <<endl;
	    cout.precision(3);
    }

    else{
        cout<<"-";
        cout << b <<endl;
	    cout.precision(3);
    }


    //part C
    int no_of_steps =0 ;
    while(c > 10){
        c=c/10;
        no_of_steps++;
    }

    cout<<setprecision(10)<<c<<"E+0"<<no_of_steps<<endl;



    }
    

}



//alternate
// LINE 1 
        // cout << hex << left << showbase << nouppercase; // formatting
        // cout << (long long) A << endl; // actual printed part

        // // LINE 2
        // cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2); // formatting
        // cout << B << endl; // actual printed part

        // // LINE 3
        // cout << scientific << uppercase << noshowpos << setprecision(9); // formatting
        // cout << C << endl; // actual printed part



// after that
// https://www.hackerrank.com/challenges/deque-stl/problem