#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t, n, m; cin>>t;
    while(t--){
    	cin>>n>>m;
    	cout<<2 - (n==1) - (m==1)<<'\n';
    }
    return 0;
}