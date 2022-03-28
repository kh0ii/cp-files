/**
 *	author: kh0i
 *	created: 11.03.2022 19:51:27
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

void solve(){
    int n;
    cin >> n;

    vector<int> a(n), ck(n, 0);
    unordered_map<int, int> mp;

    for(int &i : a){
        cin >> i;
        mp[i]++;
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < 31; ++j){
            if((1 << j) <= a[i]) continue;
            if((a[i] + a[i] == (1 << j) and mp[(1 << j) - a[i]] > 1) or (a[i] + a[i] != (1 << j) and mp[(1 << j) - a[i]])){
                ck[i] = 1;
                break;
            }
        }
    }
    debug(ck);
    cout << n - accumulate(ck.begin(), ck.end(), 0);
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

// Write stuff down

