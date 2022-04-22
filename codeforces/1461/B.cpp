#include "bits/stdc++.h"
using namespace std;

int n, m, p[505][505];
char a[505][505];

void solve(){
    memset(p, 0, sizeof(p));
    int ans = 0;
    cin >> n >> m;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            cin >> a[i][j];
            p[i][j] = p[i][j - 1] + (a[i][j] == '*');
        }
    }
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            int center = j, cnt = 1;
            for(int k = i; k <= n and center + cnt - 1 <= m and center - cnt + 1 >= 1; ++k){
                if(p[k][center + cnt - 1] - p[k][center - cnt] != cnt * 2 - 1) break;
//                cout << center << ' ' << cnt << '\n';
                ++ans; ++cnt;
            }
        }
    }
    cout << ans << '\n';
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int test = 1;
    cin >> test;
    for(int i=1; i<=test; ++i){
        solve();
    }
    return 0;
}
// Give yourself ~30 minutes of being stuck before reading editorial
// Write stuff down

