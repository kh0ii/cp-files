/**
 *	author: kh0i
 *	created: 21.04.2022 21:35:09
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
    ll n;
    cin >> n;
    cout << "Division ";
    if(n <= 1399) cout << 4;
    else if(n <= 1599) cout << 3;
    else if(n <= 1899) cout << 2;
    else cout << 1;
    cout << '\n';
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


