#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;
int n, a[104], k, sc, l, r, ck[104];

void solve(){
	cin>>n>>k;
	memset(ck, 0, sizeof(ck));
	for(int i=0; i<n; i++)
		cin>>a[i];
	sort(a, a+n);
	sc = 0, l = n-k-k, r = n-k;
	while(k--){
		sc += a[l] / a[r];
		ck[l] = 1;
		ck[r] = 1;
		//cout<<a[l]<<' '<<a[r]<<'\n'; // DEBUG
		++l;
		++r;
	}
	for(int i=0; i<n; i++){
		if(!ck[i])
			sc += a[i];
	}
	cout<<sc<<'\n';
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    	solve();
    return 0;
}