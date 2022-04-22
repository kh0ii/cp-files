// problem: A. Equal or Not Equal
// author: kh0i
// created: 18.12.2021 22:35:19

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
	int n = s.size();
	int cnt = 0;
	for(int i=0; i<n-1; i++)
		cnt += (s[i] == 'N');
	if(cnt >= 2){
		cout<<"YES\n";
	}
	else if(cnt == 1){
		cout<<(s[n-1] == 'E' ? "NO\n" : "YES\n");
	}
	else{
		cout<<(s[n-1] == 'N' ? "NO\n" : "YES\n");
	}
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
