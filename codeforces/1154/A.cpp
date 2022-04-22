// Problem: A. Restoring Three Numbers
// Contest: Codeforces - Codeforces Round #552 (Div. 3)
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define FOR(i, n) for(int i=0; i<n; i++)
typedef vector<int> vi;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a[4];
	for(int i=0; i<4; i++) cin>>a[i];
	sort(a, a+4);
	cout<<a[3]-a[2]<<' '<<a[3]-a[1]<<' '<<a[3]-a[0];
	return 0;
}
