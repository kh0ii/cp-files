#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int mod = 1000000007; //998244353;
int n, a[100005], b[100005], l, r;
void solve(){
    cin >> n;
    for(int i=1; i<=n; ++i){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b+1, b+n+1);
    for(int i=1; i<=n; ++i){
        if(a[i] == b[i]) continue;
        l = i;
        break;
    }
    for(int i=n; i>=1; --i){
        if(a[i] == b[i]) continue;
        r = i;
        break;
    }
    reverse(a+l, a+r+1);
//    cout << l << ' ' << r << '\n';
//    for(int i=1; i<=n; ++i)
//        cout << a[i] << ' ';
//    cout << '\n';
    for(int i=1; i<=n; ++i){
        if(a[i] != b[i]){
            cout << "no";
            return;
        }
    }
    if(l == r and r == 0)
        l = 1, r = 1;
    cout << "yes\n";
    cout << l << ' ' << r;
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

