#include "bits/stdc++.h"
using namespace std;

double a[60004], v[60004];
int n;

void solve(){
    cin >> n;
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    for(int j = 0; j < n; ++j)
        cin >> v[j];
    double l = 0, r = 1e9, ans;
    while(abs(l - r) > (1e-7)){
        double mid = (l + r) / 2.0;
        double left = -1e12, right = 1e12;
        for(int i = 0; i < n; ++i){
            left = max(left, a[i] - v[i] * mid);
            right = min(right, a[i] + v[i] * mid);
        }
//        cerr << left << ' ' << right << '\n';
        if(left > right) l = mid;
        else {
            ans = mid;
            r = mid;
        }
    }
    cout << fixed << setprecision(6) << ans;
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

