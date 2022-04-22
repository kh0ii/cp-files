// problem: C. Chat Ban
// author: kh0i
// created: 17.12.2021 20:48:00

// When TL is tight
//#pragma GCC optimize("O3,unroll-loops")
//#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include "bits/stdc++.h"
using namespace std;
#define int long long
const int inf = 2e9, mod = 1e9+7; //998244353;
int k, x;

int sm(int a){
	return a * (a + 1) / 2;
}

bool check(int a){
	int res;
	if(a <= k)
		res = a * (a + 1) / 2;
	else{
		a = 2 * k - a;
		int b = sm(k);
		int c = sm(k-1) - sm(a-1);
		res = b + c;
	}
	return res < x;
}

void solve(){
	cin >> k >> x;
	int l = 0, r = k*2-1, ans;
	while(l <= r){
		int mid = (l + r) / 2;
		if(check(mid)){
			ans = mid;
			l = mid + 1;
		}
		else r = mid - 1;
	}
	cout << ans + (ans < 2 * k - 1) << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int t; cin>>t; while(t--)
    solve();
    return 0;
}