#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;
int n;

void solve(){
	cin>>n;
	int a, b, c;
	if(n & 1){
		c = 1;
		--n;
		a = n/2 + 1;
		b = n/2 - 1;
		if(a % 2 == 0){
			a++;
			b--;
		}
	}
	else{
		c = 1;
		--n;
		a = n/2;
		b = n/2+1;
	}
	cout<<a<<' '<<b<<' '<<c<<"\n";
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    	solve();
    return 0;
}