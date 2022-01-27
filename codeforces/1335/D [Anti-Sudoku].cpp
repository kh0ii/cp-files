#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int mod = 1000000007; //998244353;
string s[9];
void solve(){
    for(int i=0; i<9; ++i)
        cin >> s[i];
    for(int i=0; i<9; ++i){
        for(int j=0; j<9; ++j){
            if(s[i][j] == '6')
                cout << '9';
            else cout << s[i][j];
        }
        cout << "\n";
    }
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

