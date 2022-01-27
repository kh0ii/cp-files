#include "bits/stdc++.h"
using namespace std;
#define int long long
const int mod = 1000000007; //998244353;
int n, k;
void solve(){
    cin >> n >> k;
    int l = 1, r = n-1, cur = 0;
    while(l <= r){
        int mid = l + (r - l) / 2;
        if(mid * (mid + 1) / 2 >= k){
//            cout << mid << ' ' << mid * (mid + 1) / 2 << '\n';
            r = mid - 1;
            cur = mid;
        }
        else l = mid + 1;
    }
    string res = "";
    for(int i=0; i<n; ++i)
        res.push_back('a');
    res[cur] = 'b';
    int be = cur * (cur - 1) / 2;
    for(int i=0; i<cur; ++i){
        if(be + i == k-1){
            res[i] = 'b';
            break;
        }
    }
    reverse(res.begin(), res.end());
    cout << res << '\n';
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int test = 1;
    cin >> test;
    for(int i=1; i<=test; ++i){
//        cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}
// Give yourself ~30 minutes of being stuck before reading editorial
// Write stuff down

