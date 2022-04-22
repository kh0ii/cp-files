#include "bits/stdc++.h"
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
using namespace std;
#define int long long
const int mod = 1000000007; //998244353;
int r, b, d;
void solve(){
    cin >> r >> b >> d;
    int pack = min(r, b);
    if((abs(b - r) + pack - 1) / pack > d)
        cout << "NO\n";
    else cout << "YES\n";
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int test = 1;
    cin >> test;
    for(int i=1; i<=test; ++i){
//        cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}
// Give yourself ~30 minutes of being stuck before reading editorial
// Write stuff down

