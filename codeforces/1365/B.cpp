#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int mod = 1000000007; //998244353;
int n, a[505], b[505];
void solve(){
    int c1 = 0, c0 = 0;
    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> a[i];
    }
    for(int i=0; i<n; ++i){
        cin >> b[i];
        c1 += (b[i] == 1);
        c0 += (b[i] == 0);
    }
    if((c1 > 0 and c0 > 0) or is_sorted(a, a+n)){
        cout << "Yes\n";
        return;
    }
    cout << "No\n";
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

