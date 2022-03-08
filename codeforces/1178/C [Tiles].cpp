/**
 *	author: kh0i
 *	created: 08.03.2022 21:01:30
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

const long long mod = 998244353;

long long power(long long a, long long b){
    if(b == 1) return a % mod;
    if(b == 0) return 1;
    long long res = power(a, b / 2);
    if(b & 1) return (((res * res) % mod) * a) % mod;
    else return res * res % mod ;
}

void solve(){
    long long w, h;
    cin >> w >> h;
    cout << power(2, w + h);
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(0);
    int test = 1;
//    cin >> test;
    for(int i=1; i<=test; ++i){
        solve();
    }
    return 0;
}

// Write stuff down

