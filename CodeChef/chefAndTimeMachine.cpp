#include<bits/stdc++.h>
#define all(x)  x.begin(),x.end()
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    int t;
    cin>>t;

    for(int l=0;l<t;l++){
        
        int n,k,m;
        cin>>n>>k>>m;
        
        int  planned_task[n];
        multiset <int> white_buttons;
    
    //input lines    
        for(int i=0;i<n;i++){
            cin>>planned_task[i];
        }

            int task;
        for(int i=0;i<n;i++){
            cin>>task;
            planned_task[i] -= task;
        }

            int y;
        
        for(int i=0;i<k+m;i++){  //taking input of both buttons into one and hence saving some time
            cin>>y;
            white_buttons.insert(y);
        }
        
        sort(planned_task ,planned_task+n );    

        int sum=0;

        multiset <int >::iterator it;

        for(int i=0;i<n;i++){
            
            if(white_buttons.empty() || *white_buttons.begin() > planned_task[i])
				sum += planned_task[i];
			
            else
			{
		         it = white_buttons.upper_bound(planned_task[i]);
				it--; //upper_bound is helpful if similar elements are present

				sum += planned_task[i] - *it;
                white_buttons.erase(it);
            }
        }

        cout<<sum<<'\n';

        //either we we use white button or black button at the end their result will be
        //always the same i.e. inceasing the no of completed task is same as decreasing the
        //no of total task as at the end no of remaining task remain the same in both cases.
    }
    return 0;
}


