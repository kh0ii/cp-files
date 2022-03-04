#include "bits/stdc++.h"
using namespace std;

void solve(){
    int n, k;
    unordered_map<int, int> mp;
    cin >> n >> k;
    vector<int> a(n);
    for(int &i : a)
        cin >> i;
    int l = 0, r = 0, ans = 0, ans_l = 0, ans_r = 0;
    while(r < n){
        mp[a[r]]++;
        while(mp.size() > k){
            if(mp[a[l]] == 1){
                mp.erase(a[l]);
            }
            else mp[a[l]]--;
            ++l;
        }
        if(r - l + 1 > ans){
            ans = r - l + 1;
            ans_l = l;
            ans_r = r;
        }
        ++r;
    }
    cout << ans_l + 1 << ' ' << ans_r + 1;
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

