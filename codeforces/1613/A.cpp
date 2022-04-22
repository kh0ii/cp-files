// problem: A. Long Comparison
// author: kh0i
// created: 20.12.2021 08:20:34

// When TL is tight
//#pragma GCC optimize("O2,unroll-loops")  // O3 might not work
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 2e9, mod = 1e9+7; //998244353;
int px, py;
string x, y;
void solve(){
	cin>>x>>px;
	cin>>y>>py;
	while(x.size() < y.size() and px){
		x += '0';
		--px;
	}
	while(y.size() < x.size() and py){
		y += '0';
		--py;
	}
	cerr << x << ' ' << y << '\n';
	if(px != py){
		cout<<(px > py ? ">\n" : "<\n");
	}
	else if(stoi(x) == stoi(y)) cout<<"=\n";
	else cout<<(stoi(x) > stoi(y) ? ">\n" : "<\n");
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
