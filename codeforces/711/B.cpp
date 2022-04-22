/**
 *	author: kh0i
 *	created: 09.03.2022 23:26:13
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
    int n, f = 0, sum = 0, rem = 0, sum1 = 0, sum2 = 0, x = -1;
    cin >> n;
    vector<vector<int>> a(n + 1, vector<int>(n + 1, 0));
    
    for(int i = 1; i <= n; ++i){
        f = 1;
        for(int j = 1; j <= n; ++j){
            cin >> a[i][j];
            if(a[i][j] == 0) f = 0;
        }
        if(f){
            sum = 0;
            for(int j = 1; j <= n; ++j){
                sum += a[i][j];
            }
        } else{
            for(int j = 1; j <= n; ++j){
                rem += a[i][j];
            }
        }
    }
    
    // special case: n = 1
    if(n == 1){
        cout << 42;
        return;
    }

    x = sum - rem;

    for(int i = 1; i <= n; ++i){
        f = 0;
        for(int j = 1; j <= n; ++j){
            if(a[i][j] == 0){
                a[i][j] = x;
                f = 1;
                break;
            }
        }
        if(f){
            break;
        }
    }
    // rows and cols
    for(int i = 1; i <= n; ++i){
        sum1 = 0, sum2 = 0;
        for(int j = 1; j <= n; ++j){
            sum1 += a[i][j];
            sum2 += a[j][i];
        }
        debug(sum1, sum2, i, x);
        if(sum1 != sum or sum2 != sum){
            cout << -1;
            return;
        }
    }

    // diagonals
    sum1 = 0, sum2 = 0;
    for(int i = 1; i <= n; ++i){
        sum1 += a[i][i];
        sum2 += a[n - i + 1][i];
    }
    debug(sum1, sum2);
    cout << (sum1 == sum and sum2 == sum and x > 0 ? x : -1);
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

