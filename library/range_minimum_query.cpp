#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int mod = 1000000007; //998244353;
const int MAXN = 100005;

int n, a[MAXN], t[4*MAXN];

void build(int node, int l, int r){
    if(l == r)
        t[node] = a[l];
    else{
        int mid = (l + r) / 2;
        build(2 * node, l, mid);
        build(2 * node + 1, mid + 1, r);
        t[node] = min(t[2 * node], t[2 * node + 1]);
    }
}

void update(int node, int l, int r, int idx, int val){
    if(l == r){
        a[idx] = val;
        t[node] = val;
    }
    else{
        int mid = (l + r) / 2;
        if(l <= idx and idx <= mid)
            update(2 * node, l, mid, idx, val);
        else
            update(2 * node + 1, mid + 1, r, idx, val);
        t[node] = min(t[2 * node], t[2 * node + 1]);
    }
}

int query(int node, int l, int r, int left, int right){ // left - right: range
    if(r < left or l > right)
        return 2e9;
    if(left <= l and r <= right)
        return t[node];
    int mid = (l + r) / 2;
    return min(query(2 * node, l, mid, left, right), query(2 * node + 1, mid + 1, r, left, right));
}

void solve(){
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    build(1, 1, n);
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    solve();
    return 0;
}

