#include "bits/stdc++.h"
using namespace std;
#define int unsigned long long
const int inf = 1e9+9, mod = 1e9+7;
int a, b;
unordered_map<int, bool> ck;
int rev(int x){
	int res = 0;
	while(x > 0){
		res = res << 1ll;
		if(x & 1)
			res ^= 1ll;
		x = x >> 1ll;
	}
	return res;
}

bool solve(int cur){
	ck[cur] = true;
	if(cur == b) return true;
	int z = cur << 1ll, t = cur << 1ll; // add 0 or 1 to the end
	++t;
	z = rev(z); t = rev(t);
	if(!ck[z] and solve(z)) return true;
	if(!ck[t] and solve(t)) return true;
	return false;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
	cin>>a>>b;
	if(a == b){
		cout<<"YES";
		return 0;
	}
	cout<<(solve(a) ? "YES" : "NO");
    return 0;
}