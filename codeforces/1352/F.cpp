/**
 *	author: kh0i
 *	created: 21.04.2022 14:54:29
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
    int x, y, z;
    cin >> x >> y >> z; 
    if(!y){
        if(x){
            cout << string(x + 1, '0') << '\n';
        }
        else {
            cout << string(z + 1, '1') << '\n';
        }
    }
    else{
        string ans = "";
        for(int i = 1; i <= y + 1; ++i){
            ans.push_back(i % 2 + '0');
        }
        ans.insert(1, string(x, '0'));
        ans.insert(0, string(z, '1'));
        cout << ans << '\n';
    }
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


