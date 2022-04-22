/**
 *	author: kh0i
 *	created: 08.03.2022 21:34:54
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

void solve(){
    string s;
    char c;
    cin >> s;
    cin >> c;
    int n = s.size();
    int f = 0;
    s = ' ' + s;
    for(int i = 1; i < s.size(); ++i){
        if(s[i] == c){
            if((i - 1) % 2 == 0 and (n - i) % 2 == 0)
                f = 1;
        }
    }
    cout << (f ? "YES\n" : "NO\n");
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

