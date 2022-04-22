/**
 *	author: kh0i
 *	created: 27.03.2022 22:00:31
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
    int f = 0, n, cnt = 0;
    cin >> n;
    vector<int> a(n + 1);
    map<int, bool> mp;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        if(a[i] == 1) { f = i, ++cnt; }
        if(a[i] > n) cnt = 2;
    }
    if(cnt != 1){
        cout << "NO\n";
        return;
    }
    while(a[1] != 1){
        a.push_back(a[1]);
        a.erase(a.begin() + 1);
    }
    debug(a);
    for(int i = 2; i <= n; ++i){
        if(a[i] >= a[i - 1] and a[i] - a[i - 1] <= 1) {
            mp[a[i]] = 1;
            continue;
        }
        else if(a[i] < a[i - 1] and mp.count(a[i])) continue;
        else {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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

