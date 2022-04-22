/**
 *	author: kh0i
 *	created: 21.04.2022 21:43:28
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
    int n, ans = 1;
    string s;
    cin >> n >> s;
    s = ' ' + s + 'W';
    for(int i = 1; i <= n; ++i){
        if(s[i] == 'W') continue;
        string p;
        while(s[i] != 'W'){
            p.push_back(s[i]);
            ++i;
        }
        int r = 0, b = 0;
        for(char c : p){
            if(c == 'R') r = 1;
            if(c == 'B') b = 1;
        }
        ans &= (r and b and p.size() > 1);
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


