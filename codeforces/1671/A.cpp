/**
 *	author: kh0i
 *	created: 22.04.2022 21:35:55
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

using ll = long long;

void solve(){
    string s;
    cin >> s;
    int n = s.size(), ans = 1;
    s = ' ' + s;
    s.push_back('-');

    for(int i = 1; i <= n; ++i){
        string p = "";
        int l = i;
        while(s[i] == s[l]){
            p.push_back(s[i]);
            ++i;
        }
        --i;
//        debug(p);
        ans &= (int(p.size()) >= 2);
    }
    cout << (ans ? "YES\n" : "NO\n");
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(0);
    int test = 1;
    cin >> test;
    for(int i = 1; i <= test; ++i){
        solve();
    }
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}


