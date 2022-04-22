#include "bits/stdc++.h"
using namespace std;
#define int long long
const int mod = 1000000007; //998244353;

int d, k;

void solve(){
    cin >> d >> k;
    int turn = 0, p = 0, q = 0;
    while(true){
        if(turn & 1) p += k;
        else q += k;
        if(p * p + q * q > d * d){
            if(turn & 1) cout << "Ashish\n";
            else cout << "Utkarsh\n";
            return;
        }
        ++turn;
    }
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int test = 1;
    cin >> test;
    for(int i=1; i<=test; ++i){
//        cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}
// Give yourself ~30 minutes of being stuck before reading editorial
// Write stuff down

