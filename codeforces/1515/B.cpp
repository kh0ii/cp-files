#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int mod = 1000000007; //998244353;
int n;
void solve(){
    cin >> n;
    if(n % 2 == 0 and sqrt(n / 2) == int(sqrt(n / 2)))
        cout << "YES\n";
    else if(n % 4 == 0 and sqrt(n / 4) == int(sqrt(n / 4)))
        cout << "YES\n";
    else cout << "NO\n";
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

