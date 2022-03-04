#include "bits/stdc++.h"
using namespace std;

const int mod = 1e9 + 7;

string s;
int f[100005];

void solve(){
    cin >> s;
    s = ' ' + s;
    f[0] = f[1] = 1;
    if(s[1] == 'm' or s[1] == 'w'){
        cout << 0;
        return;
    }
    for(int i = 2; i < s.size(); ++i){
        if(s[i] == s[i - 1] and (s[i] == 'u' or s[i] == 'n'))
            f[i] = f[i - 1] + f[i - 2];
        else if(s[i] == 'm' or s[i] == 'w'){
            cout << 0;
            return;
        }
        else f[i] = f[i - 1];
        f[i]  %= mod;
    }
    cout << f[(int)s.size() - 1];
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int test = 1;
//    cin >> test;
    for(int i=1; i<=test; ++i){
        solve();
    }
    return 0;
}
// Give yourself ~30 minutes of being stuck before reading editorial
// Write stuff down

