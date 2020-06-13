// https://codeforces.com/contest/1234

#include<bits/stdc++.h>
using namespace std;
 int main(){
    long long int n,k;
    cin>>n>>k;
    vector <long long int>  arr(n);
    list <long long int > q,q1;
    for(int i=0 ; i<n ;i++ ) cin>>arr[i];
        long long int front;
        for(int i=0;i<n;i++){
            
            if(find(q.begin() , q.end() , arr[i]) == q.end())
            {
                if(q.size() == k)
                {   
                    front  =  q.front();
                    q.pop_front();
                    q.push_back(arr[i]);
                }

                else{
                    q.push_back(arr[i]);
                }
            }
        }
    cout<<q.size()<<endl;
    while(!q.empty()){
        cout<<q.back()<<" " , q.pop_back();    
    }
        }
    

    


//     //The Harder version
//     #include <bits/stdc++.h>

// using namespace std;

// int main() {
// #ifdef _DEBUG
// 	freopen("input.txt", "r", stdin);
// //	freopen("output.txt", "w", stdout);
// #endif
	
// 	int n, k;
// 	cin >> n >> k;
	
// 	queue<int> q;
// 	set<int> vals;
// 	for (int i = 0; i < n; ++i) {
// 		int id;
// 		cin >> id;
// 		if (!vals.count(id)) {
// 			if (int(q.size()) >= k) {
// 				int cur = q.front();
// 				q.pop();
// 				vals.erase(cur);
// 			}
// 			vals.insert(id);
// 			q.push(id);
// 		}
// 	}
	
// 	vector<int> res;
// 	while (!q.empty()) {
// 		res.push_back(q.front());
// 		q.pop();
// 	}
// 	reverse(res.begin(), res.end());
// 	cout << res.size() << endl;
// 	for (auto it : res) cout << it << " ";
// 	cout << endl;
	
// 	return 0;
// }