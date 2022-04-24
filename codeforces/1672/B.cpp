/**
 *	author: kh0i
 *	created: 23.04.2022 21:07:48
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

using ll = long long;

void solve(){
    string s;
    cin >> s;
    int a = 0, b = 0;
    for(char c : s){
        if(c == 'A') ++a;
        else ++b;
        if(a < b){
            cout << "NO\n";
            return;
        }
    }
    if(b == 0 or s.size() < 2 or s.front() == 'B' or s.back() == 'A'){
        cout << "NO\n";
        return;
    }
    
    cout << "YES\n";
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


