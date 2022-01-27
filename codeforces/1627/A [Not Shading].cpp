#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int mod = 1000000007; //998244353;

int n, m, r, c;
char a[60][60];

void solve(){
    int ck = 0;
    cin >> n >> m >> r >> c;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            cin >> a[i][j];
            if(a[i][j] == 'B')
                ck = 1;
        }
    }
    if(a[r][c] == 'B'){
        cout << 0 << '\n';
        return;
    }
    if(!ck){
        cout << -1 << '\n';
        return;
    }
    for(int i = 1; i <= n; ++i){
        if(a[i][c] == 'B'){
            cout << 1 << '\n';
            return;
        }
    }
    for(int i = 1; i <= m; ++i){
        if(a[r][i] == 'B'){
            cout << 1 << '\n';
            return;
        }
    }
    cout << 2 << '\n';
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

