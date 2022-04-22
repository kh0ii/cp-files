#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;
int n, k;
pair<int, int> a[100005];
void solve(){
    cin >> n >> k;
    for(int i=0; i<n; ++i){
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a, a+n);
    int cnt = 1;
    for(int i=1; i<n; ++i){
        if(a[i-1].second + 1 != a[i].second)
            ++cnt;
    }
    cout << (cnt <= k ? "Yes" : "No") << '\n';
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while(t--)
    	solve();
    return 0;
}



