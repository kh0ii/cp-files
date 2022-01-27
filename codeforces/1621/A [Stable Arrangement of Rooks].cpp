#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int mod = 1000000007; //998244353;
int n, k;
char ans[50][50];
void solve(){
    memset(ans, '.', sizeof(ans));
    cin >> n >> k;
    if((n+1)/2 < k){
        cout << -1 << '\n';
        return;
    }
    
    for(int i=1, j=1; j <= n and i <= n and k > 0; i += 2, j += 2, --k){
        ans[i][j] = 'R';
    }
    for(int i=1; i<=n; ++i){
        for(int j=1; j<=n; ++j){
            cout << ans[i][j];
        }
        cout << '\n';
    }
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

