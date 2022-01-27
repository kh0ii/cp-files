// Problem: A. Playing with Paper
// Contest: Codeforces - Codeforces Round #296 (Div. 2)
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define MOD 1000000007

#define pb push_back
#define pf push_front
#define vi vector<int>
#define sz(x) (int((x).size()))
#define bg(x) begin(x)
#define all(x) (x).begin(), (x).end()
#define rall(x) x.rbegin(), x.rend() 
#define sor(x) sort(all(x)) 

#define each(a,x) for (auto& a: x)
#define FOR(i, n) for(int i=0; i<n; i++)

void solve(){
	ll a, b;
	cin>>a>>b;
	ll res=0;
	while(a>0 and b>0){
		if(a>=b){
			res+=a/b;
			a = a%b;
		}
		else{
			res+=b/a;
			b = b%a;
		}
	}
	cout<<res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
