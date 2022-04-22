/**
 *	author: kh0i
 *	created: 08.03.2022 10:05:09
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

inline int gcd(int a, int b) { int r; while (b) {r = a % b; a = b; b = r;} return a; }
inline int lcm(int a, int b) { return a / gcd(a, b) * b; }

void solve(){
    long long x, ans = LLONG_MAX, ansX, ansY;
    cin >> x;
    for(long long i = 1; i * i <= x; ++i){
        if(x % i == 0 and lcm(i, x / i) == x){
            if(ans > max(i, x / i)){
                ansX = i; ansY = x / i;
                ans = max(i, x / i);
            }
        }
    }
    cout << ansX << ' ' << ansY;
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

