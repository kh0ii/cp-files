/**
 *	author: kh0i
 *	created: 11.03.2022 21:46:24
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

#define int long long

int n, m, vis[105][105], p[105][105], row, col, mrow, mcol, f = 1;
char a[105][105];

void dfs(int i, int j){
    if(i > n or j > m or i < 1 or j < 1 or a[i][j] == '0' or vis[i][j]){
        return;
    }
    debug(i, j);
    row = max(row, i);
    col = max(col, j);
    mrow = min(mrow, i);
    mcol = min(mcol, j);
    vis[i][j] = 1;
    dfs(i + 1, j);
    dfs(i, j + 1);
    dfs(i - 1, j);
    dfs(i, j - 1);
}

void solve(){
    memset(vis, 0, sizeof(vis));
    memset(p, 0, sizeof(p));
    f = 1;
    cin >> n >> m;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            cin >> a[i][j];
            p[i][j] = p[i - 1][j] + p[i][j - 1] - p[i - 1][j - 1] + (a[i][j] == '1');
        }
    }
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            row = 0, col = 0;
            mrow = INT_MAX, mcol = INT_MAX;
            if(a[i][j] == '1' and !vis[i][j] and f){
                dfs(i, j);
                debug(mrow, mcol, row, col);
                if(p[row][col] - p[row][mcol - 1] - p[mrow - 1][col] + p[mrow - 1][mcol - 1] != (row - mrow + 1) * (col - mcol + 1))
                    f = 0;
                debug(p[row][col] - p[row][mcol - 1] - p[mrow - 1][col] + p[mrow - 1][mcol - 1]);
            }
        }
    }
    cout << (f ? "YES\n" : "NO\n");
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

// Write stuff down

