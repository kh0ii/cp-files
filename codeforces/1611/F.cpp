#include <bits/stdc++.h>
using namespace std;

#define int long long
inline int gcd(int a, int b) { int r; while (b) {r = a % b; a = b; b = r;} return a; }
inline int lcm(int a, int b) { return a / gcd(a, b) * b; }

const int N = 2e5 + 5;

int n, k, a[N];

void solve(){
	cin >> n >> k;

	for(int i = 1; i <= n; ++i){
		cin >> a[i];
		a[i] = -1 * a[i];
	}
	
	int l = 1, r = 1, ans = 0, f, s, sum = 0;
	while(r <= n){
		sum += a[r];
		while(sum > k){
			sum -= a[l];
			++l;
		}
		if(sum <= k and r - l + 1 > ans){
			ans = r - l + 1;
			f = l;
			s = r;
		}
		++r;
	}
	if(ans)
		cout << f << ' ' << s << '\n';
	else cout << -1 << '\n';
}

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int test = 1;
	cin >> test;
	for(int i = 1; i <= test; ++i){
		solve();
	}
    return 0;
}
