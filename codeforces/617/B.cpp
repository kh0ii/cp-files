#include "bits/stdc++.h"
using namespace std;
#define int long long
const int inf = 1e9+9, mod = 1e9+7;
int n, a[103];

void solve(){
    cin >> n;
    for(int i=1; i<=n; ++i){
        cin >> a[i];
    }
    int f = 0, cnt = 1, ans = 1;
    for(int i=1; i<=n; ++i){
        if(a[i] == 1){
            if(f){
                ans *= cnt;
                cnt = 1;
            }
            f = 1;
        }
        if(!f)
            continue;
        if(!a[i])
            ++cnt;
    }
    if(!f)
        cout << 0;
    else
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



