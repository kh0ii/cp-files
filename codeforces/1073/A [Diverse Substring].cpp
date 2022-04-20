/**
 *	author: kh0i
 *	created: 12.04.2022 22:32:00
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
    int n;
    string s;
    cin >> n;
    cin >> s;
    for(int i = 0; i < n - 1; ++i){
        if(s[i] != s[i + 1]){
            cout << "YES\n";
            cout << s[i] << s[i + 1];
            return;
        }
    }
    cout << "NO\n";
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(0);
    int test = 1;
//    cin >> test;
    for(int i = 1; i <= test; ++i){
        solve();
    }
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}


