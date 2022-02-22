#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, a[200005];

void solve(){
    unordered_map<int, int> mp;
    int ans = 0;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        a[i] -= i;
    }
    for(int i = 1; i <= n; ++i){
        ans += mp[a[i]];
        mp[a[i]]++;
    }
    cout << ans << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test = 1;
    cin >> test;
    for(int i = 1; i <= test; ++i)
        solve();
    return 0;
}
