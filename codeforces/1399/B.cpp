#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	vector<int> a(n), b(n);
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<n; i++) cin>>b[i];
	int mina = *min_element(a.begin(), a.end());
	int minb = *min_element(b.begin(), b.end());
	long long ans = 0;
	for(int i=0; i<n; ++i)
		ans += max(a[i] - mina, b[i] - minb);
	cout<<ans<<'\n';
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}

    return 0;
}
