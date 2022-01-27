#include "bits/stdc++.h"
using namespace std;
#define int long long
#define d n / m
const int mod = 1000000007; //998244353;
int n, m, kmax, kmin;

void solve(){
    cin >> n >> m;
    int k = n - m + 1;
    kmax = k * (k - 1) / 2;
    k = n / m;
    if(n % m == 0){
        kmin = m * k * (k - 1) / 2;
    }
    else{
        int f = n % m, s = m - f;
        kmin = (f * k * (k + 1) / 2) + (s * k * (k - 1) / 2);
    }
    cout << kmin << ' ' << kmax;
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

