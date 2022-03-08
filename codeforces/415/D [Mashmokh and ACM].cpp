#include "bits/stdc++.h"
using namespace std;

const int mod = 1e9 + 7;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<vector<int>> factor(n + 1), f(k + 1, vector<int>(n + 1, 0));
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j * j <= i; ++j){
            if(i % j == 0){
                factor[i].push_back(j);
                if(j * j != i){
                    factor[i].push_back(i / j);
                }
            }
        }
    }
    for(int i = 1; i <= n; ++i)
        f[1][i] = 1;
    for(int i = 2; i <= k; ++i){
        for(int j = 1; j <= n; ++j){
            for(int d : factor[j]){
                f[i][j] += f[i - 1][d];
                f[i][j] %= mod;
            }
        }
    }

    int res = 0;
    for(int i = 1; i <= n; ++i)
        res = (res + f[k][i]) % mod;
    cout << res;
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

