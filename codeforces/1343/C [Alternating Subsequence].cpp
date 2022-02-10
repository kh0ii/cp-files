#include <bits/stdc++.h>
using namespace std;
#define int long long

int n, a[200005];

void solve(){
    vector<vector<int>> seg;
    vector<int> s;
    cin >> n;
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    a[n] = -a[n-1];
    s.emplace_back(a[0]);
    for(int i = 1; i <= n; ++i){
        if(a[i] * a[i-1] < 0){
            seg.emplace_back(s);
            s = {};
        }
        s.emplace_back(a[i]);
    }
    int ans = 0;
    for(auto k : seg)
        ans += *max_element(k.begin(), k.end());
    cout << ans << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}
