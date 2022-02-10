#include "bits/stdc++.h"
using namespace std;

string s, t, l, f;

void solve(){
    cin >> s;
    cin >> t;
    for(int i = 0; i < s.size(); ++i){
        f = "";
        f.push_back(s[i]);
        if(f == t){
            cout << "YES\n";
            return;
        }
        for(int j = i + 1; j < s.size(); ++j){
            f.push_back(s[j]);
            l = f;
            if(l == t){
                cout << "YES\n";
                return;
            }
            for(int k = j - 1; k >= 0; --k){
                l.push_back(s[k]);
                if(l == t){
                    cout << "YES\n";
                    return;
                }
            }
        }
        f = "";
        f.push_back(s[i]);
        for(int k = i - 1; k >= 0; --k){
//            cout << f << '\n';
            f.push_back(s[k]);
            if(f == t){
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int test = 1;
    cin >> test;
    for(int i=1; i<=test; ++i){
        solve();
    }
    return 0;
}
// Give yourself ~30 minutes of being stuck before reading editorial
// Write stuff down

