/**
 *	author: kh0i
 *	created: 12.03.2022 11:11:26
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
    int n, even = 1, odd = 0, ansNeg = 0, ansPos = 0;
    cin >> n;
    vector<int> a(n + 1, 0), f(n + 1, 0);

    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        if(a[i] < 0) a[i] = -1;
        else a[i] = 1;
    }

    for(int i = 1; i <= n; ++i){
        f[i] = f[i - 1] + (a[i] < 0);
    }
    
    for(int i = 1; i <= n; ++i){
        if(f[i] & 1){
            ansNeg += even;
            ansPos += odd;
            ++odd;
        }
        else{
            ansNeg += odd;
            ansPos += even;
            ++even;
        }
//        ansPos += (a[i] > 0);
//        ansNeg += (a[i] < 0);
        debug(i, ansNeg, ansPos, odd, even, f[i]);
    }
    debug(f);
    cout << ansNeg << ' ' << ansPos;
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

