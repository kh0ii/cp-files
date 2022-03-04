#include "bits/stdc++.h"
using namespace std;

void solve(){
    int n, f, pr = -1;
    cin >> n;
    vector<int> a(n), ck(n, 0);
    vector<pair<int, int>> ans;
    f = 1;
    for(int &i : a){
        cin >> i;
        if(i != pr and pr != -1)
            f = 0;
        pr = i;
    }
    if(f){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    for(int i = 1; i < n; ++i){
        if(a[i] != a[0]){
            pr = i;
            ans.push_back(make_pair(0, i));
        }
    }
    for(int i = 1; i < n; ++i){
        if(a[i] == a[0]){
            ans.push_back(make_pair(pr, i));
        }
    }
    for(auto [u, v] : ans)
        cout << u + 1 << ' ' << v + 1 << '\n';
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

