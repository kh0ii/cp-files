#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;
int n, u, r, d, l;
void solve(){
    cin>>n>>u>>r>>d>>l;
    for(int mask = 0; mask < (1 << 4); mask++){
        int du = u, dr = r, dd = d, dl = l;
        for(int i=0; i<4; i++){
            if(!(mask & (1 << i))) continue;
            if(i == 0) du--, dr--;
            else if(i == 1) du--, dl--;
            else if(i == 2) dd--, dr--;
            else dd--, dl--;
        }
        if(min({du, dr, dd, dl}) >= 0 and max({du, dr, dd, dl}) <= n-2){
            cout<<"YES\n"; return;
        }
    }
    cout<<"NO\n";
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}



