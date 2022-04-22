#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;
int n, m, ans[100005], a[100005], d;
unordered_map<int, bool> ck;

void solve(){
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    int cnt = 0;
    for(int i=n; i>=1; i--){
        if(!ck[a[i]]) ++cnt;
        ck[a[i]] = true;
        ans[i] = cnt;
    }
    while(m--){
        cin >> d;
        cout << ans[d] << '\n';
    }
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    //cin >> t;
    while(t--)
    	solve();
    return 0;
}



