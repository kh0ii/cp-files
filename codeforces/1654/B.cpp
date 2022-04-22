#include <bits/stdc++.h>
using namespace std;

void solve(){
	string s, ans;
	cin >> s;
	set<char> st;
	for(char c : s){
		st.insert(c);
	}
	int n = st.size();
	st.clear();
	for(int i = s.size() - 1; i >= 0; --i){
		st.insert(s[i]);
		ans.push_back(s[i]);
		if(st.size() == n){
			reverse(ans.begin(), ans.end());
			cout << ans << "\n";
			return;
		}
	}
	cout << s << '\n';
}

signed main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}