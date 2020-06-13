

// Make Codeforces not Coronaforces
// | In English По-русски
// Hitzz | Logout
//  You have +182! Wow!

    
// HOMETOPCONTESTSGYMPROBLEMSETGROUPSRATINGAPICALENDARHELP10 YEARS! 


// PROBLEMSSUBMIT CODEMY SUBMISSIONSSTATUSHACKSROOMSTANDINGSCUSTOM INVOCATION
    
// General
  
// #	Author	Problem	Lang	Verdict	Time	Memory	Sent	Judged	 	 
// 81532709	Contestant:
// striver_79	1358D - 76	GNU C++17	Accepted	109 ms	9612 KB	2020-05-26 19:02:38	2020-05-26 20:17:26	Add to favourites	Compare
  
// → SourceCopy
// // Striver_79
// // Youtube: takeUforward
// // Practice is the only shortcut to improve
 
#include <algorithm>
#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#define mod (int) 998244353
#define MOD (int) 1e9+7
// Big two primes
#define X 1001100011100001111ll
#define all(a) a.begin(),a.end()
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i,a,b) for (int i = a; i < b; i++)
#define bloop(i,a,b) for (int i = a ; i>=b;i--)
#define tc(t) int t; cin >> t; while (t--)
#define int long long
#define ll long long
#define pb emplace_back
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define in(x) scanf("%d", &x)
#define rr return 0
#define prec(n) fixed<<setprecision(n)
#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int> >
#define inf (int)(1e18)
#define ini(a, i) memset(a, i, sizeof(a))
#define vi vector<int>
#define fi first
#define se second
#define endl "\n"
#define ii pair<int, int>
#define vii vector<ii>
#define sz(s) s.size()
#define bits(n) __builtin_popcount(n)
const int MAXN = (int)((1e5) + 100);
int gcd(int a, int b) { if (a == 0) return b; return gcd(b % a, a);}
int max(int a, int b) {if (a > b) return a; else return b;}
int min(int a, int b) {if (a < b) return a; else return b;}
void pr(int x) {cout << x;}
void prl(int x) {cout << x << endl;}
// typedef tree<pii, null_type, less<pii>, rb_tree_tag, tree_order_statistics_node_update> Set;
//bool isPrime(int N){ for(int i=2;i*i<=N;++i){if(N%i==0) return false;}return true;}
int cbrt(int x) { int lo = 1, hi = min(2000000ll, x); while (hi - lo > 1) {int mid = (lo + hi) / 2; if (mid * mid * mid < x) {lo = mid;} else hi = mid;} if (hi * hi * hi <= x) return hi; else return lo;}
const int dx[4] = { -1, 1, 0, 0};
const int dy[4] = {0, 0, -1, 1};
int XX[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int YY[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
const int N =  (int)(1 * 1e6 + 10);
vector<vector<int>>vec;
int n, m;
set<int> st;
int c = 0;
void func(int i, int j, int s) {
	if (i == (n - 1) && j == (m - 1)) {
		c++;
		st.insert(s + vec[i][j]);
		return ;
	}
 
	if (i >= n || j >= m) return;
 
	func(i + 1, j, s + vec[i][j]);
	func(i, j + 1, s + vec[i][j]);
}
signed main() {
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif
 
	fio;
	//srand(time(NULL));
	int T = 1;
	// cin >> T;
 
	while (T--) {
		int n, days;
		cin >> n >> days;
 
		int a[2 * n + 1];
		int pre1[2 * n + 1], pre2[2 * n + 1];
 
		for1(i, n) {
			cin >> a[i];
			a[n + i] = a[i];
		}
		pre1[0] = pre2[0] = a[0] = 0;
 
		for1(i, 2 * n) {
			pre1[i] = pre1[i - 1] + ( (a[i] * (a[i] + 1)) / 2);
			pre2[i] = pre2[i - 1] + a[i];
		}
 
 
 
		int maxi = 0;
 
		bloop(i, 2 * n, n + 1) {
			int low = 1;
			int high = i;
			int ans = i;
			while (low <= high) {
				int mid = (low + high) / 2;
 
				if (pre2[i] - pre2[mid] < days) {
					ans = mid;
					high = mid - 1;
				}
				else low = mid + 1;
			}
			int temp = pre2[i] - pre2[ans - 1] - days;
			int sum = pre1[i] - pre1[ans - 1];
			sum -= (temp * (temp + 1)) / 2;
			maxi = max(maxi, sum);
		}
 
		prl(maxi);
	}
}
