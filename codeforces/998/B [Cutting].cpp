#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int mod = 1000000007; //998244353;

int n, B, a[105], p[105], f[105], ans;
vector<int> v;
map<int, bool> mp;

void solve(){
    cin >> n >> B;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        p[i] = p[i-1] + (a[i] & 1 ? 1 : -1);
    }
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j < i; ++j){
            if(p[i] == p[j] and p[i] == 0 and !mp[j]){
                v.push_back(abs(a[j] - a[j + 1]));
                mp[j] = 1;
            }
        }
    }
    sort(v.begin(), v.end());
    for(auto i : v){
        for(int j = B; j >= i; --j){
            if(f[j - i] or j - i == 0)
                f[j] = max(f[j], f[j - i] + 1);
        }
    }
    for(int i = B; i >= 0; --i)
        ans = max(ans, f[i]);
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
// Give yourself ~30 minutes of being stuck before reading editorial
// Write stuff down

