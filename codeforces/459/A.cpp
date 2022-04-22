#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define y1 chim
const int mod = 1000000007; //998244353;
int x1, y1, x2, y2;
void solve(){
    cin >> x1 >> y1 >> x2 >> y2;
    if(x1 == x2){
        int d = abs(y2 - y1);
        cout << x1 + d << ' ' << y1 << ' ' << x2 + d << ' ' << y2;
    }
    else if(y1 == y2){
        int d = abs(x2 -x1);
        cout << x1 << ' ' << y1 + d << ' ' << x2 << ' ' << y2 + d;
    }
    else if (abs(x1 - x2) == abs(y1 - y2)){
        cout << x1 << ' ' << y2 << ' ' << x2 << ' ' << y1;
    }
    else{
        cout << -1;
    }
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int test = 1;
//    cin >> test;
    for(int i=1; i<=test; ++i){
//        cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}
// Give yourself ~30 minutes of being stuck before reading editorial
// Write stuff down

