/**
 *	author: kh0i
 *	created: 22.03.2022 21:33:22
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

using ll = long long;

double x, y;
void solve(){
    cin >> x >> y;
    if(x == 0 and y == 0){
        cout << 0 << '\n';
    }
    else if(sqrt(x * x + y * y) == (int)sqrt(x * x + y * y)){
        cout << 1 << "\n";
    }
    else cout << 2 << '\n';
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

