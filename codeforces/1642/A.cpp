#include "bits/stdc++.h"
using namespace std;

#define y1 chim

int x1, y1, x2, y2, x3, y3, maxx;

void solve(){
    cin >> y1 >> x1;
    cin >> y2 >> x2;
    cin >> y3 >> x3;
    maxx = max(x1, max(x2, x3));
    if(x1 == x2 and x1 == maxx){
        cout << abs(y2 - y1) << '\n';
    }
    else if(x2 == x3 and x2 == maxx){
        cout << abs(y2 - y3) << '\n';
    }
    else if(x1 == x3 and x1 == maxx){
        cout << abs(y1 - y3) << '\n';
    }
    else
        cout << 0 << '\n';
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int test = 1;
    cin >> test;
    for(int i=1; i<=test; ++i){
        solve();
    }
    return 0;
}
// Give yourself ~30 minutes of being stuck before reading editorial
// Write stuff down

