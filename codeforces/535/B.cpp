#include "bits/stdc++.h"
using namespace std;
#define int long long

int n;
vector<int> s;

void add(int cur){
    if(cur > 1e9) return;
    s.push_back(cur);
    add(cur * 10ll + 4ll);
    add(cur * 10ll + 7ll);
}

void solve(){
    sort(s.begin(), s.end());
    cin >> n;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == n){
            cout << i + 1;
            return;
        }
    }
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    add(4);
    add(7);
    int test = 1;
//    cin >> test;
    for(int i=1; i<=test; ++i){
        solve();
    }
    return 0;
}
// Give yourself ~30 minutes of being stuck before reading editorial
// Write stuff down

