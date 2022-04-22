/**
 *	author: kh0i
 *	created: 11.03.2022 22:30:16
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

int n, m;
char a[104][104];

struct Ans{
    int xlow, ylow, xhigh, yhigh;
};

void solve(){
    cin >> n >> m;
    vector<Ans> ans;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            cin >> a[i][j];
        }
    }
    if(a[1][1] == '1'){
        cout << -1 << '\n';
        return;
    }
    for(int i = n; i >= 1; --i){
        for(int j = m; j >= 1; --j){
            if(a[i][j] == '1'){
                if(i == 1){
                    Ans k;
                    k.xlow = i;
                    k.ylow = j - 1;
                    k.xhigh = i;
                    k.yhigh = j;
                    ans.push_back(k);
                } else{
                    Ans k;
                    k.xlow = i - 1;
                    k.ylow = j;
                    k.xhigh = i;
                    k.yhigh = j;
                    ans.push_back(k);
                }
            }
        }
    }
    cout << ans.size() << '\n';
    for(auto [xlow, ylow, xhigh, yhigh] : ans){
        cout << xlow << ' ' << ylow << ' ' << xhigh << ' ' << yhigh << '\n';
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

// Write stuff down

