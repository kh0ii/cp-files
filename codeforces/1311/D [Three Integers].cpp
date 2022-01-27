#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;
int a, b, c;
void solve(){
	cin>>a>>b>>c;
	int A, B, C, curr = inf;
	for(int ta=1; ta<=2*a; ta++){
		for(int tb=ta; tb<=2*b; tb+=ta){
			for(int d=0; d<2; d++){
				int tc = tb*(c/tb) + d*tb;
				int cnt = abs(ta - a) + abs(tb - b) + abs(tc - c);
				if(cnt < curr){
					curr = cnt;
					A = ta;
					B = tb;
					C = tc;
				}
			}
		}
	}
	cout<<curr<<'\n'<<A<<' '<<B<<' '<<C<<'\n';
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}