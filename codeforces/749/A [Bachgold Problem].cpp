/**
 *	author: kh0i
 *	created: 08.03.2022 10:15:38
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
    vector<int> ans;
    cin >> n;
    if(n % 2 == 0) {
        for(int i = 2; i <= n; i += 2)
            ans.push_back(2);
    }
    else{
        ans.push_back(3);
        n -= 3;
        for(int i = 2; i <= n; i += 2)
            ans.push_back(2);
    }
    cout << ans.size() << '\n';
    for(int i : ans)
        cout << i << ' ';
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

