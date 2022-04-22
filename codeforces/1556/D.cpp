#include "bits/stdc++.h"
using namespace std;
#define int long long
const int inf = 1e9+9, mod = 1000000007; //998244353;
int n, k;

int query(int op, int i, int j){
    int res;
    if(op == 1) cout << "or ";
    else cout << "and ";
    cout << i << ' ' << j << endl;
    cin >> res;
    return res;
}

void finish(int res){
    cout << "finish " << res << endl;
}

void solve(){
    cin >> n >> k;
    int a[n];
    int x = query(0, 1, 2), y = query(1, 1, 2), z = query(0, 1, 3), t = query(1, 1, 3), u = query(0, 2, 3), v = query(1, 2, 3);
    int sm = (x + y + z + t + u + v);
    a[0] = sm / 2 - (u + v);
    a[1] = sm / 2 - (z + t);
    a[2] = sm / 2 - (x + y);
    for(int i=3; i<n; ++i){
        x = query(0, i, i+1), y = query(1, i, i+1);
        a[i] = x + y - a[i-1];
    }
    sort(a, a+n);
    finish(a[k-1]);
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

