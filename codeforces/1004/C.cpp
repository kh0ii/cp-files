#include "bits/stdc++.h"
using namespace std;
#define int long long

const int N = 1e5 + 3;
int n, a[N], ans;
unordered_map<int, int> mp, ck;

void solve(){
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        mp[a[i]]++;
    }
    for(int i = 1; i <= n; ++i){
        mp[a[i]]--;
        if(mp[a[i]] == 0){
            mp.erase(a[i]);
        }
        if(ck.count(a[i])){
            continue;
        }
        ans += mp.size();
        ck[a[i]] = 1;
    }
    cout << ans;
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

