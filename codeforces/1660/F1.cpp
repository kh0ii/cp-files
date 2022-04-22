/**
 *	author: kh0i
 *	created: 31.03.2022 22:46:04
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

using ll = long long;

const int N = 2e5 + 2;
ll n, p1[N], p2[N], ans, x, y;
string s;

void solve(){
    ans = 0;
    cin >> n;
    cin >> s;
    s = ' ' + s;
    for(int i = 1; i <= n; ++i){
        p1[i] = p1[i - 1] + (s[i] == '+');
        p2[i] = p2[i - 1] + (s[i] == '-');
    }
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= i; ++j){
            x = p1[i] - p1[j - 1];
            y = p2[i] - p2[j - 1];
            if((y - x) % 3 == 0 and y >= x){
//                debug(j, i);
                ++ans;
            }
        }
    }
    cout << ans << "\n";
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

