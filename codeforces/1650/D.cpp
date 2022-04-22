/**
 *	author: kh0i
 *	created: 08.03.2022 22:32:41
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
    vector<int> a(n), ans;
    for(int &i : a)
        cin >> i;
    for(int i = n - 1; i >= 0; --i){
        if(a[i] != i + 1){
            for(int j = 0; j < i; ++j){
                if(a[j] == i + 1){
                    rotate(a.begin() , a.begin() + a.size() - (n - j - 1), a.begin() + i + 1);
                    ans.push_back(j + 1);
//                    debug(j, a);
                }
            }
        } else { ans.push_back(0); }
    }
    reverse(ans.begin(), ans.end());
    debug(ans);
    if(is_sorted(a.begin(), a.end())){
        for(int i : ans)
            cout << i << " ";
    }
    else cout << -1;
    cout << '\n';
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

