/**
 *	author: kh0i
 *	created: 21.04.2022 22:06:32
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

using ll = long long;

void solve(){
    int n, m;
    cin >> n >> m;
    vector<vector<char>> a(n + 2, vector<char>(m + 2, '.')), ans(n + 2, vector<char>(m + 2, '-'));
    vector<vector<int>> p(m + 1);
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            cin >> a[i][j];
        }
    }
    
    for(int j = 1; j <= m; ++j){
        p[j].push_back(n + 1);
        for(int i = n; i >= 1; --i){
            if(a[i][j] == 'o'){
                p[j].push_back(i);
            }
        }
        p[j].push_back(0);
    }

    for(int j = 1; j <= m; ++j){
        for(int k = 0; k < p[j].size() - 1; ++k){
            int r = p[j][k], l = p[j][k + 1];
            int cnt = 0;
            for(int f = l + 1; f < r; ++f){
                cnt += a[f][j] == '*';
            }
//            debug(l, r, j, cnt);
            if(cnt){
                while(cnt){
                    --r;
//                    debug(r, j);
                    ans[r][j] = '*';
                    --cnt;
                }
            }
        }
    }

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            if(ans[i][j] == '-'){
                if(a[i][j] == 'o') ans[i][j] = 'o';
                else ans[i][j] = '.';
            }
            cout << ans[i][j];
        }
        cout << '\n';
    }
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(0);
    int test = 1;
    cin >> test;
    for(int i = 1; i <= test; ++i){
        solve();
    }
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}


