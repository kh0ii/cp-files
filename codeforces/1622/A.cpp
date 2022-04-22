#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;
int l[3];
void solve(){
    cin >> l[0] >> l[1] >> l[2];
    sort(l, l+3);
    if(l[0] + l[1] == l[2] or (l[0] == l[1] and l[2] % 2 == 0) or (l[1] == l[2] and l[0] % 2 == 0))
        cout << "YES\n";
    else cout << "NO\n";
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while(t--)
    	solve();
    return 0;
}



