/**
 *	author: kh0i
 *	created: 27.03.2022 21:52:59
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

using ll = long long;

int n;
string s;

void solve(){
    int a = 0, b = 0;
    cin >> n >> s;
    for(int i = 1; i < n; ++i){
        if(s[i] == s[i - 1] and s[i] == '0') ++a;
        if(i > 1 and s[i] == s[i - 2] and s[i] == '0' and s[i - 1] == '1') ++b;
    }
    cout << a * 2 + b << "\n";
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

// Write stuff down

