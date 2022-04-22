#include "bits/stdc++.h"
using namespace std;
const int maxn = 100004, mod = 1e9 + 7;
int n, a[maxn], f[maxn], ans;

void solve(){
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    f[0] = 1;
    for(int i = 1; i <= n; ++i){
        vector<int> d;
        for(int j = 1; j * j <= a[i]; ++j){
            if(a[i] % j == 0){
                d.push_back(j);
                if(j * j != a[i])
                    d.push_back(a[i] / j);
            }
        }
        sort(d.begin(), d.end());
        reverse(d.begin(), d.end());
        for(int j : d){
            if(j > n) continue;
            f[j] += f[j-1];
            f[j] %= mod;
        }
    }
    for(int i = 1; i <= n; ++i){
        ans += f[i];
        ans %= mod;
    }
    cout << ans;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int test = 1;
//    cin >> test;
    for(int i=1; i<=test; ++i){
        solve();
    }
    return 0;
}
// Give yourself ~30 minutes of being stuck before reading editorial
// Write stuff down

