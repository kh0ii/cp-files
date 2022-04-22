#include "bits/stdc++.h"
using namespace std;
#define int long long
const int inf = 1e9+9, mod = 1000000007; //998244353;
int n, k, dp[200005], ans;
string s;
char c;
unordered_map<char, bool> mp;

void solve(){
    cin >> n >> k;
    cin >> s;
    s = ' ' + s;
    for(int i=0; i<k; ++i){
        cin >> c;
        mp[c] = 1;
    }
    for(int i=1; i<=n; ++i){
        if(mp[s[i]])
            dp[i] = dp[i-1] + 1;
        else dp[i] = 0;
        ans += dp[i];
    }
    cout << ans;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int test = 1;
//    cin >> test;
    for(int i=1; i<=test; ++i){
//        cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}

