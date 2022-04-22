// problem: C. Wrong Addition
// author: kh0i
// created: 20.12.2021 22:54:47

// When TL is tight
//#pragma GCC optimize("O2,unroll-loops")  // O3 might not work
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#include "bits/stdc++.h"
using namespace std;
#define int long long
const int inf = 2e9, mod = 1e9+7; //998244353;

void solve(){
	string a, s, b;
	cin >> a >> s;
	while(a.size() < s.size()){
		a = '0' + a;
	}
	while(a.size() and s.size()){
		int add = s[s.size()-1] - a[a.size()-1];
		if(add <= -1){
			add += 10;
			if(s[s.size()-2] != '1'){
				cout << -1 << '\n';
				return;
			}
			s.pop_back();
		}
		a.pop_back();
		s.pop_back();
		b = to_string(add) + b;
	}
	while(b.front() == '0') 
		b.erase(b.begin());
	while(a.front() == '0')
		a.erase(a.begin());

	if(a.size() == 0 and s.size() == 0) 
		cout << b << '\n';
	else 
	cout << -1 << '\n';
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
