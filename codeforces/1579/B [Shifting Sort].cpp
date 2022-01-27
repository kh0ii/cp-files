/**
 *    author: kh0i
 *    created: 28.09.2021 21:41:59
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

struct Step{
	int l, r, d;
};

int j, k;

void solve(){
	j = 0;
	int n; cin>>n;
	vector<int> a(n), b(n);
	for(int i=0; i<n; i++) { cin>>a[i]; b[i] = a[i]; }
	sort(all(b)); 
	Step steps[n];
	for(int i=0; i<n; i++){
		if(a[i]==b[i]) continue;
		k = find(a.begin()+i, a.end(), b[i]) - a.begin();

		steps[j].l = i+1; steps[j].r = k+1; steps[j].d = k-i;
			
		for(int df=0; df<steps[j].d; df++){
			int dt = a[i];
			for(int l=i; l<k; l++) a[l] = a[l+1];
			a[k] = dt;
		}
		// for(int i=0; i<n; i++) cout<<a[i]<<' ';
		j++;
	}
	// for(int i=0; i<n; i++) cout<<a[i]<<' '; cout<<'\n';
	cout<<j<<'\n';
	for(int i=0; i<j; i++){
		cout<<steps[i].l<<' '<<steps[i].r<<' '<<steps[i].d<<'\n';
	}
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    /*freopen("*.inp", "r", stdin);
    freopen("*.out", "w", stdout);*/
    int t; cin>>t; while(t--)
    solve();
    return 0;
}