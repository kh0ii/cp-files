#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int mod = 1000000007; //998244353;

int n, a[100005], b[100005];

void solve(){
    unordered_map<int, bool> mp;
    cin >> n;
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    for(int i = 0; i < n; ++i)
        cin >> b[i];
    for(int i = 0; i < n; ++i){
        if(a[i] < b[i] and !mp[1]){
            cout << "NO\n";
            return;
        }
        else if(a[i] > b[i] and !mp[-1]){
            cout << "NO\n";
            return;
        }
        mp[a[i]] = 1;
    }
    cout << "YES\n";
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

