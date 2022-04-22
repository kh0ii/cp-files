/**
 *	author: kh0i
 *	created: 08.03.2022 15:31:11
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

void solve(){
    int n, left, right, cnt = 1;
    cin >> n;
    vector<pair<int, int>> a(n + 1);
    vector<int> ans(n + 1, 0);
    for(int i = 1; i <= n; ++i){
        cin >> a[i].first;
        a[i].first = n - a[i].first;
        a[i].second = i;
    }
    sort(a.begin() + 1, a.end());
    a.push_back((make_pair(-1, -1)));
    for(int i = 1; i <= n; ++i){
        left = i;
        while(a[i + 1].first == a[i].first){
            ++i;
        }
        right = i;
        if((right - left + 1) % a[i].first){
            cout << "Impossible";
            return;
        }
        for(int j = left; j <= right; j += a[left].first){
            for(int k = j; k < j + a[left].first; ++k)
                ans[a[k].second] = cnt;
            ++cnt;
        }
    }
    cout << "Possible\n";
    for(int i = 1; i <= n; ++i)
        cout << ans[i] << ' ';
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

