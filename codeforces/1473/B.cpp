#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;
string s, t;

void solve(){
	cin>>s>>t;
	int a = s.size(), b = t.size();
	int sz = a * b / __gcd(a, b);
	string x, y;
	for(int i = 0; i < sz / a; i++)
		x += s;
	for(int i = 0; i < sz / b; i++)
		y += t;
	cout<<(x == y ? x : "-1")<<'\n';
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int q;
    cin>>q;
    while(q--)
    	solve();
    return 0;
}