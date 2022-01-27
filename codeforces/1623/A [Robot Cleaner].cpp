#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1000000007; //998244353;
int n, m, rb, cb, rd, cd;

void solve(){
    int ans = inf;
    cin >> n >> m >> rb >> cb >> rd >> cd;
    if(rb > rd)
        ans = min(ans, n - rb + n - rd);
    else 
        ans = min(ans, rd - rb);
    if(cb > cd)
        ans = min(ans, m - cb + m - cd);
    else ans = min(ans, cd - cb);
    cout << ans << '\n';
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