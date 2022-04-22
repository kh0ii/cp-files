#include "bits/stdc++.h"
using namespace std;

#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    map<int, int> mp;
    for(int &i : a){
        cin >> i;
        if(i % k == 0) continue;
        mp[k - (i % k)]++;
    }
    int mx = 0, val = 0;
    for(auto [f, s] : mp){
        if(s >= mx){
            val = f;
            mx = s;
        }
//        cerr << f << ' ' << s << '\n';
    }
//    cerr << mx << ' ' << val << '\n';
    if(val == 0){
        cout << 0 << '\n';
        return;
    }
    cout << k * (mx - 1) + val + 1<< '\n';
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int test = 1;
    cin >> test;
    for(int i=1; i<=test; ++i){
        solve();
    }
    return 0;
}
// Give yourself ~30 minutes of being stuck before reading editorial
// Write stuff down

