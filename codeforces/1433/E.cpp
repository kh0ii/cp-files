#include "bits/stdc++.h"
using namespace std;
#define int long long
const int inf = 1e9+9, mod = 1e9+7;

int f[21];

void solve(){
    int n, ans = 0;
    cin >> n;
    f[0] = 1;
    for(int i = 1; i<=21; ++i)
        f[i] = f[i-1] * i;
    cout << f[n] / f[n/2] / f[n/2] * f[n/2-1] * f[n/2-1] / 2;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    //cin >> t;
    while(t--)
    	solve();
    return 0;
}



