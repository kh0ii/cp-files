#include "bits/stdc++.h"
using namespace std;
#define int long long
int n, x, f[200005], s[200005];

void solve(){
    int a = 0, b = 0, ia = 0, ib = 0;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> x;
        if(x & 1){
            s[ib] = x;
            ++ib;
       }
        else{
            f[ia] = x;
            ++ia;
        }
    }
    sort(s, s + ib);
    sort(f, f + ia);
    int i = ia - 1, j = ib - 1;
    while(i >= 0 or j >= 0){
        if(j >= 0 and f[i] < s[j]) --j;
        else a += f[i], --i;
        if(i >= 0 and f[i] > s[j]) --i;
        else b += s[j], --j;
    }
    if(a == b)
        cout << "Tie\n";
    else cout << (a > b ? "Alice\n" : "Bob\n");
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

