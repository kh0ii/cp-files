/**
 *	author: kh0i
 *	created: 09.03.2022 13:52:59
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
    vector<int> a(n), f;
    for(int &i : a){
        cin >> i;
    }
    int m = *min_element(a.begin(), a.end());
    for(int i : a){
        if(i % m == 0)
            f.push_back(i);
    }
    sort(f.begin(), f.end());
    for(int &i : a){
        if(i % m == 0){
            i = f.front();
            f.erase(f.begin());
        }
    }
    debug(a);
    cout << (is_sorted(a.begin(), a.end()) ? "YES\n" : "NO\n");
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

