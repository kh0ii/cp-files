#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;
int n, k, q, a[200005], b[200005], p[200005], l, r;

void solve(){
    cin >> n >> k >> q;
    for(int i=0; i<n; ++i){
        cin >> l >> r;
        a[l]++;
        a[r+1]--;
    }
    for(int i=1; i<=200004; ++i)
        a[i] += a[i-1];
    for(int i=1; i<=200004; ++i){
        b[i] += a[i];
        p[i] = p[i-1] + (b[i] >= k);
    }
    for(int i=0; i<q; ++i){
        cin >> l >> r;
        cout << p[r] - p[l-1] << '\n';
    }
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    //cin >> t;
    while(t--)
    	solve();
    return 0;
}



