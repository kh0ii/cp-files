#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int(x.size())

void solve(){
	int n; cin>>n;
	string s[2];
	for(int i=0; i<2; i++) cin>>s[i];
	bool flag = true;
	for(int i=0; i<n; i++){
		if(s[0][i]=='1' and s[1][i]=='1'){
			flag = false;
			break;
		}
	}
	if(flag) cout<<"YES\n";
	else cout<<"NO\n";
}

int main() {
	int t; cin>>t;
	while(t--) solve();
}
