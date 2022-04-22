#include "bits/stdc++.h"
using namespace std;
#define int long long
const int inf = 1e9+9, mod = 1e9+7;

void solve(){
    int n;
    cin >> n;
    int d = n * (n - 1) * (n - 2) * (n - 3) * (n - 4);
    cout << d / 120 * d; 
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    //cin >> t;
    while(t--)
    	solve();
    return 0;
}



