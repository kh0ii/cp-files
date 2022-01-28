#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int mod = 1000000007; //998244353;

const int maxn = 2e5 + 3;
int parent[maxn];

int Find(int x){
    if(x == parent[x])
        return x;
    else 
        return parent[x] = find(parent[x]);
}

void Union(int a, int b){
    int c = find(a);
    int d = find(b);
    if(c != d)
        parent[d] = c;
}

void solve(){
    // Important step after all union steps:
    for(int i = 1; i <= maxn; ++i)
        parent[i] = Find(i);
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

