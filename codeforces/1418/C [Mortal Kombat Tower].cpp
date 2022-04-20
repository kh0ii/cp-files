// When TL is tight
//#pragma GCC optimize("O3,unroll-loops")
//#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 2e9, mod = 1e9+7; //998244353;

void solve(){
	int n;
	cin >> n;
	vector<int> a(n + 1);
	vector<vector<int>> f(3, vector<int>(n + 4, inf));
	for(int i = 1; i <= n; ++i){
		cin >> a[i];
	}
	f[1][1] = a[1];
	f[2][1] = inf;
	f[1][2] = f[1][1] + a[2];
	f[2][2] = f[1][1];
	for(int i = 3; i <= n; ++i){
		f[1][i] = min(f[2][i - 1] + a[i], f[2][i - 2] + a[i] + a[i - 1]); 
		f[2][i] = min(f[1][i - 1], f[1][i - 2]);
	}
	if(n == 1){
		cout << f[1][n] << '\n';
	}
	else{
		cout << min(f[1][n], f[2][n]) << "\n";
	}
}

int32_t main() {
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int t; cin>>t; while(t--)
    solve();
    return 0;
}