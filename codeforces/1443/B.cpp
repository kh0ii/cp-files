/**
 *	author: kh0i
 *	created: 08.03.2022 21:20:32
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

void solve(){
    int a, b, ans = 0;
    string s;
    cin >> a >> b;
    cin >> s;
    vector<pair<int, int>> seg;
    s = ' ' + s + '0';
    for(int i = 1; i < s.size(); ++i){
        if(s[i] == '0') continue;
        int left = i;
        while(s[i + 1] == '1'){
            ++i;
        }
        int right = i;
        seg.push_back(make_pair(left, right));
    }
    ans = a * (int)seg.size();
    int n = seg.size();
    for(int i = 0; i < n - 1; ++i){
        int k = seg[i + 1].first - seg[i].second - 1;
        if(a > k * b){
            ans = ans + k * b - a;
        }
    }
    cout << ans << '\n';
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(0);
    int test = 1;
    cin >> test;
    for(int i=1; i<=test; ++i){
        solve();
    }
    return 0;
}

// Write stuff down

