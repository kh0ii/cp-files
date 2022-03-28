/**
 *	author: kh0i
 *	created: 19.03.2022 09:14:32
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

using ll = long long;

int n, m, vis[51][51];
char a[51][51];

void dfs(int i, int j){
    if(i > n or j > m or i < 1 or j < 1 or vis[i][j] or a[i][j] == '#')
        return ;
//    debug(i, j);
    vis[i][j] = 1;
    dfs(i + 1, j);
    dfs(i, j + 1);
    dfs(i - 1, j);
    dfs(i, j - 1);
}

void reset(){
    for(int i = 0; i <= 50; ++i){
        for(int j = 0; j <= 50; ++j){
            a[i][j] = '\0';
        }
    }
}

void solve(){
    memset(vis, 0, sizeof(vis));
    reset();
    cin >> n >> m;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            if(a[i][j] == 'B'){
                if(a[i - 1][j] != 'G' and a[i - 1][j] != 'B')
                    a[i - 1][j] = '#';
                if(a[i][j - 1] != 'G' and a[i][j - 1] != 'B')
                    a[i][j - 1] = '#';
                if(a[i + 1][j] != 'G' and a[i + 1][j] != 'B')
                    a[i + 1][j] = '#';
                if(a[i][j + 1] != 'G' and a[i][j + 1] != 'B')
                    a[i][j + 1] = '#';
                if(a[i - 1][j] == 'G'){
                    cout << "No\n";
                    return;
                }
                if(a[i][j - 1] == 'G'){
                    cout << "No\n";
                    return;
                }
                if(a[i + 1][j] == 'G'){
                    cout << "No\n";
                    return;
                }
                if(a[i][j + 1] == 'G'){
                    cout << "No\n";
                    return;
                }
//                debug(a[i][j], a[i + 1][j], a[i][j + 1], a[i][j - 1], a[i - 1][j]);
            }
        }
    }
    dfs(n, m);
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            if(a[i][j] == 'B' and vis[i][j]){
                cout << "No\n";
                return;
            }
            else if(a[i][j] == 'G' and !vis[i][j]){
                cout << "No\n";
                return;
            }
        }
    }
    cout << "Yes\n";
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

