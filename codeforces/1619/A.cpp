// problem: A. Square String?
// author: kh0i
// created: 20.12.2021 21:35:11

// When TL is tight
//#pragma GCC optimize("O2,unroll-loops")  // O3 might not work
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 2e9, mod = 1e9+7; //998244353;
string s;
void solve(){
	cin>>s;
	if(s.size() % 2){
		cout << "NO\n";
	}
	else{
		for(int i=0; i<s.size()/2; i++){
			if(s[i] != s[i + s.size()/2]){
				cout << "NO\n";
				return;
			}
		}
		cout << "YES\n";
	}
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
