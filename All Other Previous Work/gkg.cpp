// { Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

void add_pair(vector<pair<string,pair<int,int> > > &A,string str,int x,int y);
int get_size(vector<pair<string,pair<int,int> > > &A);
void print_values(vector<pair<string,pair<int,int> > > &A);
void sort_pair(vector<pair<string,pair<int,int> > > &A);

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		vector<pair<string,pair<int,int> > > A;
		int q;
		cin>>q;
		while(q--)
		{
			char c;
			cin>>c;
			if(c=='a')
			{
				string name;
				cin>>name;
				int x,y;
				cin>>x>>y;
				add_pair(A,name,x,y);
			}
			if(c=='b')
			{
				cout<<get_size(A)<<" ";
			}
			if(c=='c')
			{
				print_values(A);
			}
			if(c=='d')
			{
			 	sort_pair(A);
			}
		
		
		}
cout<<endl;
	}
	return 0;
}// } Driver Code Ends


/* Inserts a pair  <string,   pair<x, y> > >    into the vector A */
void add_pair(vector<pair<string,pair<int,int> > > &A, string str, int x, int y)
{
     A.push_back(make_pair(str , make_pair( x , y )));
}

/* Returns the size of the vector A */
int get_size(vector<pair<string,pair<int,int> > > &A)
{
     return A.size();
}

/* Prints space separated values of vector A */
void print_values(vector<pair<string,pair<int,int> > > &A)
{
    
int i;
for(i=0;i<A.size();i++) 
    {
        cout<<A[i].first<<" "<<A[i].second.first<<" "<<A[i].second.second<<" ";
    }
    
}

/* Sorts the vector A based on value x and y*/
void sort_pair(vector<pair<string,pair<int,int> > > &A)
{
        for (int i = 0 ;i < A.size() -1  ; i++){
         for  (int j = 0 ; j < A.size() - i - 1 ; j++){
        
                if(A[j].second.first > A[j+1].second.first){
                     swap(A[j] ,A[j+1]);
                }
                else if (A[j].second.first == A[j+1].second.first){
                    
                    if(A[j].second.second > A[j+1].second.second){
                        swap(A[j] ,A[j+1]);
                    }
                }

         }
     }
}

