#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;
int n, a[100005], prefix[100005];
void solve(){
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a[i];
        prefix[i] = prefix[i-1] + a[i];
    }
    int ans = 0;
    for(int i=1; i<n; i++){
        if(prefix[i] == prefix[n] - prefix[i])
            ++ans;
    }
    cout << ans;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    //cin >> t;
    while(t--)
    	solve();
    return 0;
}



