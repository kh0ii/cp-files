/**
 *	author: kh0i
 *	created: 13.01.2022 09:43:51
**/
#include "bits/stdc++.h"
// #pragma GCC optimize("Ofast,unroll-loops")
// #pragma GCC target("avx2,tune=native")
using namespace std;

#define sz(x) ((int)(x).size())
#define all(a) (a).begin(), (a).end()
inline int gcd(int a, int b) { int r; while (b) {r = a % b; a = b; b = r;} return a; }
inline int lcm(int a, int b) { return a / gcd(a, b) * b; }

int n, a[200005], cnt, f;
map<int, int> dp;

void solve(){
    cin >> n;
    for(int i=1; i<=n; ++i){
        cin >> a[i];
        dp[a[i]] = dp[a[i] - 1] + 1;
        if(cnt < dp[a[i]]){
            cnt = dp[a[i]];
            f = a[i];
        }
    }
    vector<int> pos;
    for(int i=n; i>=1; --i){
        if(a[i] == f){
            pos.emplace_back(i);
            --f;
        }
    }
    reverse(pos.begin(), pos.end());
    cout << cnt << '\n';
    for(int i : pos)
        cout << i << ' ';
}

// Give yourself ~30 minutes of being stuck before reading editorial
// Write stuff down

int32_t main() {
//    freopen(".inp", "r", stdin);
//    freopen(".out", "w", stdout);
    cin.tie(0)->sync_with_stdio(0);
    int test = 1;
//    cin >> test;
    for(int i=1; i<=test; ++i){
//        cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}


