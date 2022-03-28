/**
 *	author: kh0i
 *	created: 11.03.2022 21:34:46
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

void solve(){
    int n;
    cin >> n;
    if(n % 3 == 0){
        for(int i = 0; n; ++i){
            if(i & 1) cout << 1;
            else cout << 2;
            n -= ((i & 1) ? 2 : 1);
        }
    }
    else if(n % 3 == 1){
        for(int i = 0; n; ++i){
            if(i & 1) cout << 2;
            else cout << 1;
            n -= ((i & 1) ? 2 : 1);
        }
    }
    else{
        for(int i = 0; n; ++i){
            if(i & 1) cout << 1;
            else cout << 2;
            n -= ((i & 1) ? 1 : 2); 
        }
    }
    cout << '\n';
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

