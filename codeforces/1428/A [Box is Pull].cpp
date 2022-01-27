#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;
#define y1 chim

int x1, y1, x2, y2;
void solve(){
	cin >> x1 >> y1 >> x2 >> y2;
    int x = abs(x1 - x2), y = abs(y1 - y2);
    if(x and y){
        cout << x + y + 2 << '\n';
    }
    else{
        cout << max(x, y) << '\n';
    }
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while(t--)
    	solve();
    return 0;
}



