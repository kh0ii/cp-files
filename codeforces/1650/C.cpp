/**
 *	author: kh0i
 *	created: 08.03.2022 22:19:09
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

#define int long long

struct Point{
    int x, w, i;
};

void solve(){
    int ans = 0, n, m, cnt = 1;
    deque<Point> dq;
    cin >> n >> m;
    vector<Point> a(m);
    for(auto &[x, w, i] : a){
        cin >> x >> w;
        i = cnt++;
    }
    sort(a.begin(), a.end(), [](Point f, Point s){
            return f.w < s.w;
            });
    for(int i = 0; i < 2 * n; ++i){
        ans += a[i].w;
        dq.push_back(a[i]);
    }
    sort(dq.begin(), dq.end(), [](Point f, Point s){
            return f.x < s.x;
            });
    cout << ans << '\n';
    while(!dq.empty()){
        cout << dq.front().i << ' ' << dq.back().i << '\n';
        dq.pop_front();
        dq.pop_back();
    }
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

