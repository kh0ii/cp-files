// problem: C. Poisoned Dagger
// author: kh0i
// created: 19.12.2021 23:16:49

// When TL is tight
//#pragma GCC optimize("O2,unroll-loops")  // O3 might not work
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#include "bits/stdc++.h"
using namespace std;
#define int long long
const int inf = 2e9, mod = 1e9+7; //998244353;
int n, a[103], h;

bool check(int k){
	if(!k) return 0;
	int res = 0;
	for(int i = 0; i < n; i++){
		if(i == n - 1) res += k;
		else res += min(a[i+1] - a[i], k);
	}
	return res >= h;
}

void solve(){
	cin >> n >> h;
	for(int i = 0; i < n; i++)
		cin >> a[i];

	int l = 1, r = 1e18;
	while(l <= r){
		int mid = l + (r - l) / 2;
		if(check(mid)){
			if(!check(mid-1)){
				cout << mid << '\n';
				return;
			}
			r = mid - 1;
		}
		else l = mid + 1;
	}
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int t; cin >> t; while(t--)
    solve();
    return 0;
}
