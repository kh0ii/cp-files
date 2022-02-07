#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int mod = 1000000007; //998244353;

vector<int> f;
int k;

int sum(int d){
    int res = 0;
    while(d > 0){
        res += d % 10;
        d /= 10;
    }
    return res;
}

void solve(){
    for(int i = 10; i <= 11000000; ++i){
        if(sum(i) == 10) f.push_back(i);
    }
    cin >> k;
    cout << f[k-1];
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

