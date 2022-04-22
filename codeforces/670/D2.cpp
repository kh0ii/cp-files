#include "bits/stdc++.h"
using namespace std;
#define int long long
const int inf = 1e9+9, mod = 1e9+7;
int n, k, a[100003], b[100003];

bool check(int f){
	int d = k;
	for(int i=0; i<n; i++){
		if(a[i] * f <= b[i]) continue;
		else d -= a[i] * f - b[i];
        if(d < 0) return false;
	}
	return true;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>k;
    for(int i=0; i<n; i++)
    	cin>>a[i];
    for(int i=0; i<n; i++)
    	cin>>b[i];
    int l = 0, r = 2e9, ans = 0;
    while(l<=r){
    	int mid = l + (r-l)/2;
    	if(check(mid)){
    		ans = mid;
    		l = mid + 1;
    	}
    	else r = mid - 1;
    }
    cout<<ans;
    return 0;
}