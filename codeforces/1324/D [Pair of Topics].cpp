#include "bits/stdc++.h"
using namespace std;
#define int long long
const int inf = 1e9+9, mod = 1e9+7;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, ans = 0;
    cin>>n;
    int a[n], b[n], c[n];
    for(int i=0; i<n; i++)
    	cin>>a[i];
    for(int i=0; i<n; i++){
    	cin>>b[i];
    	c[i] = a[i] - b[i];
    }
    sort(c, c+n);
    for(int i=0; i<n; i++){
    	if(c[i] <= 0) 
    		continue;
    	int d = lower_bound(c, c+n, -c[i] + 1) - c;
    	ans += (i - d);
    }
    cout<<ans;
    return 0;
}