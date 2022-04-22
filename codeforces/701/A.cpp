// Problem: A. Cards
// Contest: Codeforces - Codeforces Round #364 (Div. 2)
// Memory Limit: 256 MB
// Time Limit: 1000 ms

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
	int n, sum(0);
	cin>>n;
	vi a(n);
	FOR(i, n){
		cin>>a[i];
		sum+=a[i];
	}
	int c = sum/(n/2);
	for(int i=0; i<n; i++){
		if(a[i]!=1000){
			for(int j=i+1; j<n; j++){
				if(a[i]+a[j] == c){
					cout<<i+1<<' '<<j+1;
					cout<<'\n';
					a[i] = 1000;
					a[j] = 1000;
				}
			}
		}
	}
	cerr<<sum<<c;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
