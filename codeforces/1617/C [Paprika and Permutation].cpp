#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;
int n, x;
void solve(){
	cin>>n;
	set<int> perm;
    vector<int> a;
    for(int i = 1; i <= n; ++i)
        perm.insert(i);
    for(int i = 1; i <= n; ++i){
        cin >> x;
        if(perm.count(x))
            perm.erase(x);
        else a.push_back(x);
    }
    sort(a.begin(), a.end());
    int ans = perm.size();
    for(int i : perm){
        int k = *a.begin();
        if(i * 2 >= k){
            cout << -1 << '\n';
            return;
        }
//        cout << k << ' ';
        a.erase(a.begin());
    }
    cout << ans << '\n';
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    	solve();
    return 0;
}
