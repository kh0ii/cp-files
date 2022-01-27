#include "bits/stdc++.h"
using namespace std;
#define int long long
const int mod = 1000000007; //998244353;
int n, k;
void solve(){
    cin >> n >> k;
    int smal = n;
    for(int i=2; i*i<=n; ++i){
        if(n % i == 0){
            smal = i;
            break;
        }
    }
    if(n & 1){
        cout << smal + n + 2 * (k - 1) << '\n';
    }
    else cout << n + smal * k << '\n';
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

