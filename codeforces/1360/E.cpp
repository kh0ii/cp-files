#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int mod = 1000000007; //998244353;
int n;
string s[100];
void solve(){
    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> s[i];
    }
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            if(s[i][j] == '1'){
                if((i < n - 1 and s[i+1][j] != '1') and (s[i][j+1] != '1' and j < n - 1)){
                    cout << "NO\n";
                    return;
                }
            }
        }
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

