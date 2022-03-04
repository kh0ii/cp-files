#include "bits/stdc++.h"
using namespace std;

int n;

void solve(){
    cin >> n;
    for(int i = 0; i * 4 <= n; ++i){
        if((n - i * 4) % 7 == 0){
            for(int j = 0; j < i; ++j)
                cout << 4;
            for(int j = 0; j < (n - i * 4) / 7; ++j)
                cout << 7;
            return;
        }
    }
    cout << -1;
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

