#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int mod = 1000000007; //998244353;
int n;

void solve(){
    cin >> n;
    int d;
    for(int j=2; j * j<=n; ++j){
        if(n % j == 0){
            d = n / j;
            for(int i=2; i*i <= d; ++i){
                if(d % i == 0 and d / i != j and i != j and d/i != i){
                    cout << "YES\n";
                    cout << j << ' ' << i << ' ' << d/i << '\n';
                    return;
                }
            }
        }
    }
    cout << "NO\n";
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

