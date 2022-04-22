#include "bits/stdc++.h"
using namespace std;

#define int long long

void solve(){
    int n, m;
    cin >> n;
    vector<int> a(n);
    for(int &i : a)
        cin >> i;
    cin >> m;
    vector<int> b(m);
    for(int &i : b)
        cin >> i;
    int l = 0, r = 0, ans = 0, suml = 0, sumr = 0, f = 0;
    while(l < n and r < m){
//        cerr << l << ' ' << r << ' ' << suml << ' ' << sumr << ' ' << f << '\n';
        if(f == 0) {
            suml += a[l];
            sumr += b[r];
        }
        else if(f == -1)
            suml += a[l];
        else if(f == 1)
            sumr += b[r];
        if(suml == sumr){
            suml = 0; sumr = 0;
            ++ans;
            ++l; ++r;
            f = 0;
        }
        else if(suml > sumr){
            if(r == m - 1){
                cout << - 1 ;
                return;
            }
            f = 1;
            ++r;
        }
        else {
            if(l == n - 1){
                cout << -1;
                return;
            }
            f = -1;
            ++l;
        }
    }
//    cerr << l << ' ' << r << '\n';
    if(l < n or r < m) ans = -1;
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

