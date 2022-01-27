// Problem: A. Professor GukiZ's Robot
// Contest: Codeforces - Educational Codeforces Round 6
// Memory Limit: 256 MB
// Time Limit: 500 ms

#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define MOD 1000000007

#define pb push_back
#define pf push_front
#define vi vector<int>
#define sz(x) (int((x).size()))
#define bg(x) begin(x)
#define all(x) (x).begin(), (x).end()
#define rall(x) x.rbegin(), x.rend() 
#define sor(x) sort(all(x)) 

#define each(a,x) for (auto& a: x)
#define FOR(i, n) for(int i=0; i<n; i++)

void solve(){
	int x1, y1, x2, y2;
	cin>>x1>>y1>>x2>>y2;
	int x = abs(x1-x2);
	int y = abs(y1-y2);
	cout<<min(x, y) + (max(x, y)-min(x, y));
}

int main(){
    ios_base::sync_with_stdio(false);
    solve();
    return 0;
}
