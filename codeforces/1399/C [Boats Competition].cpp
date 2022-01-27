#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;
int n, a[54];

int get(int k){
    int l = 0, r = n - 1, cnt = 0, f;
    while(l < r){
        f = a[l] + a[r];
        if(f == k){
            ++cnt;
            ++l; --r;
        }
        else if(f < k)
            ++l;
        else --r;
//        cout << l << ' ' << r << ' ' << cnt << '\n';
    }
    return cnt;
}

void solve(){
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    sort(a, a+n);
    int ans = 0;
    for(int i = 2; i <= 101; ++i){
        ans = max(ans, get(i));
    }
    cout << ans << '\n';
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while(t--)
    	solve();
    return 0;
}



