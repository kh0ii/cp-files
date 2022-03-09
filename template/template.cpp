#include "bits/stdc++.h"
using namespace std;

#define int long long  // MLE sometimes
inline int gcd(int a, int b) { int r; while (b) {r = a % b; a = b; b = r;} return a; }
inline int lcm(int a, int b) { return a / gcd(a, b) * b; }

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int get_rand(int l, int r) {
    assert(l <= r);
    return uniform_int_distribution<int> (l, r)(rng);
}

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

void solve(){

}

// Write stuff down

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(0);
    int test = 1;
//    cin >> test;
    for(int i = 1; i <= test; ++i){
//        cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}
