#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;

void solve(){
    int n;
    cin>>n;
    int a[n], b[n], mx;
    bool flag;
    mx = -inf;
    for(int i=0; i<n; i++){
        cin>>a[i];
        mx = max(mx, a[i]);
    }
    sort(a, a+n);
    for(int i=1; i<=mx + mx; i++){
        flag = true;
        for(int j=0; j<n; j++){
            b[j] = a[j] ^ i;
        }
        sort(b, b+n);
        for(int j=0; j<n; j++)
            if(b[j] != a[j])
                flag = false;
        if(flag){ 
            cout<<i<<'\n';
            return;
        }
    }
    cout<<-1<<'\n';
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}



