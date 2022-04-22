/**
 *	author: kh0i
 *	created: 28.03.2022 23:55:24
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
    int k, n, ok = 0, reqsum;
    map<ll, ll> mp;
    pair<int, int> f, s;
    ll sum = 0;

    cin >> k;
    vector<vector<ll>> a(k);

    for(int i = 0; i < k; ++i){
        cin >> n;
        sum = 0;
        a[i].resize(n);
        for(int j = 0; j < n; ++j){
            cin >> a[i][j];
            sum += a[i][j];
        }
        if(ok) continue;
        for(int j = 0; j < n; ++j){
            if(mp.count(sum - a[i][j]) and mp[sum - a[i][j]] != i){
                ok = 1;
                f.first = mp[sum - a[i][j]];
                s.first = i;
                s.second = j;
                reqsum = sum - a[i][j];
                debug(reqsum);
            }
            else mp[sum - a[i][j]] = i;
        }
    }
    if(ok){
        cout << "YES\n";
        sum = accumulate(a[f.first].begin(), a[f.first].end(), 0);
        for(int j = 0; j < a[f.first].size(); ++j){
            if(sum - a[f.first][j] == reqsum){
                f.second = j;
                break;
            }
        }
        cout << f.first + 1 << ' ' << f.second + 1 << '\n' << s.first + 1 << ' ' << s.second + 1;
    }
    else{
        cout << "NO";
    }
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

