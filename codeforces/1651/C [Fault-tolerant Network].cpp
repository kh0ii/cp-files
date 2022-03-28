/**
 *	author: kh0i
 *	created: 10.03.2022 21:58:59
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int &i : a)
        cin >> i;
    for(int &i : b)
        cin >> i;
    /*
    if(n == 3){
        int x1 = abs(a[0] - b[0]), x2 = abs(a[0] - b[1]), x3 = abs(a[0] - b[2]);
        int x4 = abs(a[1] - b[0]), x5 = abs(a[1] - b[1]), x6 = abs(a[1] - b[2]);
        int x7 = abs(a[2] - b[0]), x8 = abs(a[2] - b[1]), x9 = abs(a[2] - b[2]);
        cout << min()
    }
    else if(n >= 4){
        cout << a[0] + b[0] + a[n - 1] + b[n - 1] << '\n';
    }
    */
    int ans = min(abs(a[0] - b[0]) + abs(a[n - 1] - b[n - 1]), abs(a[n - 1] - b[0]) + abs(a[0] - b[n - 1]));
    int min1, min2, min3, min4;
    min1 = min2 = min3 = min4 = INT_MAX;
    for(int i = 0; i < n; ++i){
        min1 = min(min1, abs(a[0] - b[i]));
        min2 = min(min2, abs(a[n - 1] - b[i]));
        min3 = min(min3, abs(a[i] - b[0]));
        min4 = min(min4, abs(a[i] - b[n - 1]));
    }
    debug(min1, min2, min3, min4);
    ans =  min(ans, min(min1 + min2 + min3 + min4, min(min1 + min3 + abs(a[n - 1] - b[n - 1]), 
                    min2 + min4 + abs(a[0] - b[0]))));
    ans = min(ans, min(min1 + min4 + abs(a[n - 1] - b[0]), min2 + min3 + abs(a[0] - b[n - 1])));
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

