#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int mod = 1000000007; //998244353;

int n, k, a[200005];
string s;

void solve(){
    int ans = 0;
    cin >> n >> k;
    cin >> s;
    s = ' ' + s;
    for(int i = 1; i <= n; ++i)
        a[i] = (s[i] == '1');
    for(int i = 1; i <= n; ++i)
        a[i] += a[i-1];
    for(int i = 1; i <= n; ++i){
        if(s[i] == '1')
            i = i + k;
        else{
//            cerr << a[min(n, i+k) - a[max(0, i - k - 1)]] << ' ';
            if(a[min(n, i + k)] - a[max(0, i - k - 1)] == 0){
//                cerr << i << ' ';
                s[i] = '1';
                ++ans;
                i = i + k;
            }
        }
    }
//    cerr << endl;
    cout << ans << '\n';
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

