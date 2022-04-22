#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int mod = 1000000007; //998244353;

struct P{
    int x, y;
} a[105];

int n, par[105];
unordered_map<int, int> mp;

int find(int x){
    if(x == par[x])
        return par[x];
    else
        return par[x] = find(par[x]);
}

void uni(int x, int y){
    int f = find(x);
    int s = find(y);
    if(f != s)
        par[s] = f;
}

void solve(){
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> a[i].x >> a[i].y;
        par[i] = i;
    }
    for(int i = 1; i <= n; ++i){
        for(int j = i + 1; j <= n; ++j){
            if(a[i].x == a[j].x or a[i].y == a[j].y){
                uni(i, j);
            }
        }
    }
    for(int i = 1; i <= n; ++i)
        par[i] = find(i);
    for(int i = 1; i <= n; ++i){
        mp[par[i]]++;
//        cout << par[i] << ' ';
    }
    cout << mp.size() - 1<< '\n';
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

