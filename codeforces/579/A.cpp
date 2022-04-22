#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int x, cnt = 0; 
    cin>>x;
    while(x > 0){
        cnt += x%2;
        x /= 2;
    }
    cout << cnt;
    return 0;
}



