#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector <int> v1;
    vector <int> v2 {12,22,11,223,321};
    vector <char> v3(5);
    vector <char> v4(5,'d');
    v3={'h','i','t','e','s'};
    v1={12};
    v1.push_back(23);
    v1.push_back(2);
    v1.push_back(90);
    v1.push_back(91);
    v1.pop_back();
    v1.pop_back();
    v2.push_back(23);

    cout<<"Size of v1 :-"<<v1.size()<<endl<<"Size of v2 :-"<<v2.size()<<endl;
        cout<<"Capacity of v1 :-"<<v1.capacity()<<endl<<"Capacity of v2 :-"<<v2.capacity()<<endl;

        for(int i=0;i<v1.size();i++)
            cout<<v1[i]<<endl;

       for(int i=0;i<v4.size();i++)
            cout<<v4.at(i)<<endl;

        v2.clear();
           
        for(int i=0;i<v2.size();i++)
            cout<<v2.at(i)<<endl;

            cout<<v1.front()<<endl;

            vector <char>::iterator it=v3.begin();

            while(it!=v3.end())
    {
        cout<<*(it)<<endl;
        it++;
    }
            v3.insert(it,'h');
           for(int i=0;i<v3.size();i++)
            cout<<v3.at(i)<<endl;

//reverse a vector
    reverse(v1.begin() , v1.end());


//for finding max element in vector
// cout << "\nMax Element = "
//          << *max_element(a.begin(), a.end()); 
//     return 0; 

        // sort(arr.begin(), arr.end(),greater <int>());    

}


















#GKG


#1
void gkgCodeVector(){

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

void add_to_vector(vector<int> &A,int x);


void sort_vector_asc(vector<int> &A);


void reverse_vector(vector<int> &A);

int size_of_vector(vector<int> &A);

void sort_vector_desc(vector<int> &A);

void print_vector(vector<int> &A);

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		vector<int> A;
		int q;
		cin>>q;
		while(q--)
		{
			char c;
			cin>>c;
			if(c=='a')
			{
				int x;
				cin>>x;
				add_to_vector(A,x);
			}
			if(c=='b')
			{
				sort_vector_asc(A);
			}
			if(c=='c')
			{
				reverse_vector(A);
			}
			if(c=='d')
			{
				cout<<size_of_vector(A)<<" ";
			}
			if(c=='e')
			{
				print_vector(A);
				
			}
			if(c=='f')
			{
				sort_vector_desc(A);
			}
			
		}
cout<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete below methods*/

/*inserts an element x at 
the back of the vector A */
void add_to_vector(vector<int> &A,int x)
{
	A.push_back(x);
}

/*sort the vector A in ascending order*/
void sort_vector_asc(vector<int> &A)
{
	sort(A.begin() , A.end() );
}

/*reverses the vector A*/
void reverse_vector(vector<int> &A)
{
// 	sort(A.begin() , A.end() , greater<int>());
reverse(A.begin() , A.end());
}

/*returns the size of the vector  A */
int size_of_vector(vector<int> &A)
{
	A.size();
}

/*sorts the vector A in descending order*/
void sort_vector_desc(vector<int> &A)
{
	sort(A.begin(), A.end() , greater<int>());

}

/*prints space separated 
elements of vector A*/
void print_vector(vector<int> &A)
{
	for (int i=0 ; i<A.size() ; i++){
	    cout<<A.at(i)<<" ";
	}
}



}

#2


