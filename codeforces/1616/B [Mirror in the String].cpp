#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int mod = 1000000007; //998244353;
int n;
string s;

void solve(){
    cin >> n;
    cin >> s;
    string cur = "", prev = "";
    for(int i=0; i<n; ++i){
        cur += s[i];
        if(prev.empty()){
            prev = cur;
            continue;
        }
        if(prev.back() < cur.back()) break;
        else if(prev.back() == cur.back()){
            if(prev.front() <= cur.back())
                break;
        }
        prev = cur;
    }
    cout << prev;
    reverse(prev.begin(), prev.end());
    cout << prev << '\n';
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int test = 1;
    cin >> test;
    for(int i=1; i<=test; ++i){
        //cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}
// Give yourself ~30 minutes of being stuck before reading editorial
// Write stuff down

