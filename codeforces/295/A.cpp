#include "bits/stdc++.h"
using namespace std;
#define int long long
const int inf = 1e9+9, mod = 1e9+7;
int n, m, k, x, y, a[100005], b[100005], c[100005];

struct Add{
    int l, r, d;
} add[100005];

void solve(){
    cin >> n >> m >> k;
    for(int i=1; i<=n; ++i){
        cin >> a[i];
    }
    for(int i=1; i<=m; ++i)
        cin >> add[i].l >> add[i].r >> add[i].d;
    for(int i=0; i<k; i++){
        cin >> x >> y;
        b[x]++;
        b[y+1]--;
    }
    for(int i=1; i<=m; ++i){
        b[i] += b[i-1];
        c[add[i].l] += b[i] * add[i].d;
        c[add[i].r+1] -= b[i] * add[i].d;
    }
    for(int i=1; i<=n; ++i){
        c[i] += c[i-1];
        cout << a[i] + c[i] << ' ';
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



