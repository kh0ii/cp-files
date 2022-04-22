#include "bits/stdc++.h"
using namespace std;

void solve(){
    int r, c;
    cin >> r >> c;
    vector<vector<int>> a(r + 1, vector<int>(c + 1, 0));
    if(r == 1 or c == 1){
        if(r == 1 and c == 1){
            cout << 0;
            return;
        }
        else if(r == 1){
            for(int i = 2; i <= c + 1; ++i)
                a[r][i - 1] = i;
        }
        else if(c == 1){
            for(int i = 2; i <= r + 1; ++i)
                a[i - 1][c] = i;
        }
    }
    else{
        for(int i = 1; i <= r; ++i){
            for(int j = 1; j <= c; ++j){
                a[i][j] = i * (j + r);
            }
        }
    }
    for(int i = 1; i <= r; ++i){
        for(int j = 1; j <= c; ++j)
            cout << a[i][j] << ' ';
        cout << '\n';
    }
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

