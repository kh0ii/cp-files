#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) int(x.size())
#define pb push_back

void solve(){
	int n; cin>>n;
	int a[n][5];
	for(int i=0; i<n; i++){
		for(int j=0; j<5; j++){
			cin>>a[i][j];
		}
	}
	bool flag;
	for(int i=0; i<4; i++){
		for(int j=i+1; j<5; j++){
			int cnt1=0, cnt2=0;
			flag = true;
			for(int k=0; k<n; k++){
				if(a[k][i]==a[k][j] and a[k][i]==0) flag = false;
				if(a[k][i]==1 and a[k][j]!=1) cnt1++;
				else if(a[k][j]==1 and a[k][i]!=1) cnt2++;
			}
			if(flag and cnt1<=n/2 and cnt2<=n/2){
				cout<<"YES\n";
				return;
			}
		}
	}
	cout<<"NO\n";
}

int main() {
	int t; cin>>t;
	while(t--) solve();
}