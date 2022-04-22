#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int mod = 1000000007; //998244353;

string s, t;

void solve(){
    cin >> s >> t;
    if(t.size() > s.size()){
        cout << "NO\n";
        return;
    }
    int l = t.size() - 1;
    for(int i = s.size() - 1; i >= 0 and l >= 0; --i){
        if(s[i] != t[l]){
            --i;
        }
        else --l;
    }
    cout << (l < 0? "YES" : "NO") << '\n';
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

