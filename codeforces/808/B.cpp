#include "bits/stdc++.h"
using namespace std;
#define int long long
const int inf = 1e9+9, mod = 1e9+7;
int n, k, a[200005], total = 0, cur = 0;
void solve(){
     cin >> n >> k;
     for(int i=1; i<=n; i++){
         cin >> a[i];
         if(i <= k)
             cur += a[i];
     }
     total = cur;
     for(int i=1; i<=n-k; i++){
         cur = cur - a[i] + a[i+k];
         total += cur;
     }
     cout << fixed << setprecision(10) << double(total) / double(n - k + 1);
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    //cin >> t;
    while(t--)
    	solve();
    return 0;
}



