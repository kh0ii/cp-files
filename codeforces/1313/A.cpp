/**
 *	author: kh0i
 *	created: 12.04.2022 22:48:45
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
    int a, b, c;
    cin >> a >> b >> c;
    int da = a, db = b, dc = c, gans = 0;
    vector<int> f = {1, 2, 3, 4, 5, 6, 7};
    do{
        int ans = 0;
        for(int i : f){
            if(a - !!(i & (1 << 0)) >= 0 and b - !!(i & (1 << 1)) >= 0 and c - !!(i & (1 << 2)) >= 0){
                a -= !!(i & 1);
                b -= !!(i & 2);
                c -= !!(i & 4);
                ++ans;
            }
    //        debug(a, b, c);
        }
        gans = max(gans, ans);
        a = da, b = db, c = dc;
    } while(next_permutation(f.begin(), f.end()));
    cout << gans << '\n';
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


