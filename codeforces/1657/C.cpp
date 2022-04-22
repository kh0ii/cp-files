#pragma GCC optimize("O2,unroll-loops")
#pragma GCC target("avx2,sse2,sse,avx,popcnt")

/**
 *	author: kh0i
 *	created: 22.03.2022 21:50:13
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

using ll = long long;

int n, f;
string s, p;

void solve(){
    int ans = 0;
    cin >> n;
    cin >> s;
    while(s.size() > 1){
        p = s.substr(0, 2);
        if(p != ")("){
            s.erase(s.begin(), s.begin() + 2);
            ++ans;
            continue;
        }
        else{
            debug(p);
            f = 1;
            for(int i = 2; i < s.size(); ++i){
                if(s[i] == ')'){
                    f = 0;
                    s.erase(s.begin(), s.begin() + i + 1);
                    break;
                }
            }
            if(f)
                break;
            else ++ans;
        }
    }
    cout << ans << ' ' << s.size() << '\n';
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(0);
    int test = 1;
    cin >> test;
    for(int i = 1; i <= test; ++i){
        solve();
    }
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}

// Write stuff down
