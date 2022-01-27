/**
 *    author: kh0i
 *    created: 29.09.2021 17:40:49
**/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define mp make_pair
#define F first
#define S second

#define sz(x) (int)(x.size())
#define all(x) (x).begin(), (x).end()
#define trace(x) cerr << #x << " = " << x << '\n'

void debug_out() { cerr << endl; }

template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
  cerr<<" "<<H;
  debug_out(T...);
}
 
#ifdef LOCAL
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define debug(...) 42
#endif

void solve(){
	int res[4];
	for(int i=0; i<4; i++){
		cout<<"? "<<i+1<<' '<<i+2<<endl;
		cin>>res[i];
	}
	int ans[6] = {4, 8, 15, 16, 23, 42};
	do{
		bool flag=1;
		for(int i=0; i<4; i++){
			flag &= (ans[i]*ans[i+1]==res[i]);
		}
		if(flag){
			cout<<"!";
			for(int i=0; i<6; i++) cout<<' '<<ans[i];
			cout<<endl;
			return;
		}
	} while(next_permutation(ans, ans+6));
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    /*freopen("*.inp", "r", stdin);
    freopen("*.out", "w", stdout);*/
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}