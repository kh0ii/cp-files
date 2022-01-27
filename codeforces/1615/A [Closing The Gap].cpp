#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;
int n, a[103];
void solve(){
    int sm = 0;
    cin >> n; 
    for(int i=0; i<n; ++i){
        cin >> a[i];
        sm += a[i];
    }
    cout << (sm % n != 0) << '\n';
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while(t--)
    	solve();
    return 0;
}



