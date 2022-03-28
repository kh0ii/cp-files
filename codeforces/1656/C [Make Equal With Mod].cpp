/**
 *	author: kh0i
 *	created: 24.03.2022 21:52:26
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

using ll = long long;

int n, a[100005], f, f1;

void solve(){
    f = 0, f1 = 0;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        if(a[i] == 1){
            f = 1;
        }
        else if(a[i] == 2 or a[i] == 0){
            f1 = 1;
        }
    }
    if(f and f1){
        cout << "NO\n";
    }
    else if(!f){
        cout << "YES\n";
    }
    else{
        sort(a + 1, a + n + 1);
        for(int i = 2; i <= n; ++i){
            if(i != 1 and a[i] - 1 == a[i - 1]){
                cout << "NO\n";
                return;
            }
        }
        cout << "YES\n";
    }
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

