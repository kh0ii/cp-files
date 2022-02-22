#include "bits/stdc++.h"
using namespace std;

int n, q, m;
string s;
char c;

void solve(){
    cin >> n;
    cin >> s;
    s = ' ' + s;
    cin >> q;
    while(q--){
        cin >> m >> c;
        int l = 1, r = 1, cnt = 0, ans = 0;
        while(r <= n){
            cnt += (s[r] == c);
            while((r - l + 1) - cnt > m){
                cnt -= (s[l] == c);
                ++l;
            }
            ans = max(ans, (r - l + 1));
            ++r;
        }
        cout << ans << '\n';
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

