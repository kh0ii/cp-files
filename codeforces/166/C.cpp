#include <bits/stdc++.h>
using namespace std;

#define int long long
inline int gcd(int a, int b) { int r; while (b) {r = a % b; a = b; b = r;} return a; }
inline int lcm(int a, int b) { return a / gcd(a, b) * b; }

int n, x, a[1000005], ans;

void solve(){
	cin >> n >> x;
	for(int i = 1; i <= n; ++i){
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	while(a[(n + 1) / 2] != x){
		++n; ++ans;
		a[n] = x;
		sort(a + 1, a + n + 1);
	}
	cout << ans;
}

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int test = 1;
//	cin >> test;
	for(int i = 1; i <= test; ++i){
		solve();
	}
    return 0;
}
