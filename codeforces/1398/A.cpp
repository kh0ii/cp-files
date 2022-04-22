#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int mod = 1000000007; //998244353;
int n, a[50005];
void solve(){
    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> a[i];
    }
    if(a[0] + a[1] <= a[n-1]){
        cout << 1 << ' ' << 2 << ' ' << n << '\n';
    }
    else cout << -1 << '\n';
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int test = 1;
    cin >> test;
    for(int i=1; i<=test; ++i){
//        cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}
// Give yourself ~30 minutes of being stuck before reading editorial
// Write stuff down

