#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;
int n, a[104], d;
bool flag;

void solve(){
	flag = true;
	cin>>n>>d;
	for(int i=0; i<n; i++){
		cin>>a[i];
		if(a[i] > d)
			flag = false;
	}
	if(flag){
		cout<<"YES\n";
		return;
	}
	sort(a, a+n);
	if(a[0] + a[1] <= d) cout<<"YES\n";
	else cout<<"NO\n";
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    	solve();
    return 0;
}