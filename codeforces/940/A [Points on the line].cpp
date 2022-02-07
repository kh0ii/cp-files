#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int mod = 1000000007; //998244353;

int n, d, a[105], p[105];

void solve(){
    cin >> n >> d;
    d = d + 1;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        p[a[i]]++;
    }
    sort(a, a + n);
    int points = 0, l = 1, r = d, ans, total = 0;
    for(int i = l; i <= r; ++i)
        if(p[i])
            points += p[i];
    ans = points;
    while(r <= 101){
        if(p[l])
            points -= p[l];
        ++l; ++r;
        if(p[r]) points += p[r];
        ans = max(ans, points);
    }
//    cerr << ans << '\n';
    cout << n - ans;
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

