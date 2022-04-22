#include "bits/stdc++.h"
using namespace std;

const int N = 5e5 + 2;

int tree[4 * N], a[N], n, q, t, x, y, z, ck;

void build(int node, int left, int right){
    if(left == right){
        tree[node] = a[left];
    }
    else{
        int mid = (left + right) / 2;
        build(2 * node, left, mid);
        build(2 * node + 1, mid + 1, right);
        tree[node] = __gcd(tree[2 * node], tree[2 * node + 1]);
    }
}

void update(int node, int left, int right, int idx, int val){
    if(left == right){
        tree[node] = val;
        a[idx] = val;
    }
    else{
        int mid = (left + right) / 2;
        if(left <= idx and idx <= mid)
            update(2 * node, left, mid, idx, val);
        else
            update(2 * node + 1, mid + 1, right, idx, val);
        tree[node] = __gcd(tree[2 * node], tree[2 * node + 1]);
    }
}

bool query(int node, int left, int right, int query_left, int query_right, int val){
//    cerr << left << ' ' << right << '\n';
    if(query_left <= left and right <= query_right){
//        cerr << left << ' ' << right << ' ' << tree[node] << ' ' <<ck << '\n';
        if(tree[node] % val == 0){
            return 1;
        }
        // TODO: Handle node's children
        else{
            if(ck)
                return 0;
            if(left == right){
                ck = 1;
                return 1;
            }
            int mid = (left + right) / 2;
            return query(2 * node, left, mid, query_left, query_right, val) and 
                   query(2 * node + 1, mid + 1, right, query_left, query_right, val);
        }
    }
    if(right < query_left or query_right < left)
        return 1;
    int mid = (left + right) / 2;
    return query(2 * node, left, mid, query_left, query_right, val) and
           query(2 * node + 1, mid + 1, right, query_left, query_right, val);
}


void solve(){
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    build(1, 1, n);
    cin >> q;
    while(q--){
        cin >> t;
        if(t == 1){
            cin >> x >> y >> z;
            ck = 0;
            cout << (query(1, 1, n, x, y, z) ? "YES\n" : "NO\n");
        }
        else {
            cin >> x >> y;
            update(1, 1, n, x, y);
        }
    }
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int test = 1;
//    cin >> test;
    for(int i=1; i<=test; ++i){
        solve();
    }
    return 0;
}
// Give yourself ~30 minutes of being stuck before reading editorial
// Write stuff down

