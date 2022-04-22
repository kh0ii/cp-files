#include "bits/stdc++.h"
using namespace std;
#define int long long
const int inf = 1e9+9, mod = 1e9+7;
int n, a[103];
bool flag;
void solve(){
	cin>>n;
	flag = 1;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int x = a[0];
	for(int i=2; i<n; i+=2)
		x = __gcd(x, a[i]);
	int y = a[1];
	for(int i=3; i<n; i+=2)
		y = __gcd(y, a[i]);

	for(int i=0; i<n; i+=2){
		if(a[i] % y == 0){
			flag = false;
			break;
		}
	}
	if(flag){
		cout<<y<<'\n';
		return;
	}
	flag = true;
	for(int i=1; i<n; i+=2){
		if(a[i] % x == 0){
			flag = false;
			break;
		}
	}
	if(flag)
		cout<<x<<'\n';
	else cout<<0<<'\n';
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    	solve();
    return 0;
}