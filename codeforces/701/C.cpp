#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int mod = 1000000007; //998244353;

int n;
string s;

void solve(){
    cin >> n;
    cin >> s;
    map<char, int> mp;
    for(int i = 0; i < n; ++i)
        mp[s[i]]++;
    int l = 0, r = -1, type = mp.size(), ans = n;
    mp.clear();
    while(r < n){
        if(r > -1) mp[s[r]]++;
//        cerr << l << ' ' << r << '\n';
        while(mp.size() < type){
            ++r;
            mp[s[r]]++;
        }
        while(mp.count(s[l]) and mp[s[l]] > 1){
            mp[s[l]]--;
            ++l;
        }
        ans = min(ans, r - l + 1);
        ++r;
    }
    cout << ans << '\n';
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int test = 1;
//    cin >> test;
    for(int i=1; i<=test; ++i){
//        cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}
// Give yourself ~30 minutes of being stuck before reading editorial
// Write stuff down

