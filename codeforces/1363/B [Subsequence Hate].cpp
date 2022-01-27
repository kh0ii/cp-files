#include "bits/stdc++.h"
using namespace std;
string s;
int p1[1005], p0[1005];
void solve(){
    memset(p1, 0, sizeof(p1));
    memset(p0, 0, sizeof(p0));
	cin >> s;
	int n = s.size(), ans = 1e9;
	s = ' ' + s;
	for(int i=1; i<=n; ++i){
        p1[i] = p1[i-1] + (s[i] == '1');
        p0[i] = p0[i-1] + (s[i] == '0');
	}
	for(int i=1; i<=n; ++i){
        //cout << p1[i] << ' ' << p0[i] << '\n';
        ans = min({ans, p1[i] + p0[n] - p0[i], p0[i] + p1[n] - p1[i]});
	}
	cout << ans << '\n';
}

int main(){
//    freopen("/home/kh0i/inp", "r", stdin);
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
	int test = 0;
	cin >> test;
	for(int i=1; i<=test; ++i){
//		cout << "Case #" << i << ": ";
		solve();
	}
	return 0;
}
