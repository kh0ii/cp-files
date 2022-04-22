#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;
int a[7];
void solve(){
	for(int i=0; i<7; i++){
		cin>>a[i];
	}
	int x = a[6] - a[5];
	int y = a[6] - a[4];
	cout<<x<<' '<<y<<' '<<a[6] - x - y<<'\n';
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    	solve();
    return 0;
}