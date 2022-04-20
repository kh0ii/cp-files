/**
 *	author: kh0i
 *	created: 28.03.2022 23:10:20
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
    ll a, b, ans = 0;
    cin >> a >> b;
    if(a < b){
        swap(a, b);
    }
    while(a > b){
        if(a % 2 == 0 and a / 2 == b){
            a /= 2;
            ++ans;
        }
        else if(a % 4 == 0 and a / 4 == b){
            a /= 4;
            ++ans;
        }
        else if(a % 8 == 0){
            a /= 8;
            ++ans;
        }
        else{
            cout << -1 << '\n';
            return;
        }
    }
    if(a != b) ans = -1;
    cout << ans << '\n';
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

