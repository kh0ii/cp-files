/**
 *	author: kh0i
 *	created: 08.03.2022 20:23:32
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

void solve(){
    int n, ans;
    string s, cur = "";
    cin >> n;
    ans = n;
    cin >> s;
    s = ' ' + s;
    for(int i = 1; i <= n; ++i){
        cur.push_back(s[i]);
        int f = 1;
        if(i * 2 > n) continue;
        for(int j = i + 1; j <= n and j <= i + cur.size(); ++j){
            if(cur[j - i - 1] != s[j]){
//                debug(cur[j - i - 1], s[j], j - i - 1, j, i);
                f = 0;
                break;
            }
        }
        if(f){
//            debug(cur);
            ans = min(ans, (int)cur.size() + (n - 2 * (int)cur.size()) + 1);
        }
    }
    cout << ans;
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(0);
    int test = 1;
//    cin >> test;
    for(int i=1; i<=test; ++i){
        solve();
    }
    return 0;
}

// Write stuff down

