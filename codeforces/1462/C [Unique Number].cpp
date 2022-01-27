// Problem: C. Unique Number
// Contest: Codeforces - Codeforces Round #690 (Div. 3)
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define vi vector<int>
#define FOR(i, n) for(int i=0; i<n; i++)
#define MOD 1000000007
#define sz(x) (int((x).size()))
#define ll long long
#define all(n) (n).begin(), (n).end()

void solve() {
	int x;
    cin>>x;
    vi ans;
    int sum = 0, last = 9;
    while(sum<x&&last>0) {
    	ans.push_back(min(x - sum, last));
    	sum += last;
    	last--;
    }
  	if(sum<x) {
    	cout << -1 << "\n";
  	} 	
  	else {
    	reverse(ans.begin(), ans.end());
    	for(int i : ans) {
      		cout << i;
    	}
   		cout << "\n";
  	}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
