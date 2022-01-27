/**
 *    author: kh0i
 *    created: 29.09.2021 19:04:06
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

bool isprime(int k){
	if(k==2 or k==3) return 1;
	if(k<2 or k%2==0) return 0;
	for(int i=3; i*i<=k; i++){
		if(k%i==0) return 0;
	}
	return 1;
}

void solve(){
	int cnt=0; string res;
	for(int i=2; i<=50 and cnt<2; i++){
		if(isprime(i)){
			cout<<i<<endl;
			cin>>res;
			if(res=="yes"){
				cnt++;
				if(pow(i, 2)<=50){
					cout<<pow(i, 2)<<endl;
					cin>>res;
					if(res=="yes") cnt++;
				}
			}
		}
	}
	cout<<(cnt>=2 ? "composite" : "prime");
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    /*freopen("*.inp", "r", stdin);
    freopen("*.out", "w", stdout);*/
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}