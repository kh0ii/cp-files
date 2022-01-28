#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int mod = 1000000007; //998244353;

const int MAXN = 200004;

int bit[MAXN], a[MAXN], n;

void update(int idx, int val){
    for(; idx <= n; idx += idx & -idx){
        bit[idx] += val;
    }
}

int query(int idx){
    int res = 0;
    for(; idx > 0; idx -= idx & -idx)
        res += bit[idx];
    return res;
}

void solve(){
    // Build Fenwick Tree
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        update(i, a[i]);
    }
    // Sum of elements from L to R is query(R) - query(L - 1)
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    solve();
    return 0;
}

