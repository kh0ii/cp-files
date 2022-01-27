// Problem: A. Spyke Talks
// Contest: Codeforces - Croc Champ 2013 - Qualification Round
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
	int n;
	cin>>n;
	int a[n];
	FOR(i, n) cin>>a[i];
	vi b;
	int res=0;
	FOR(i, n){
		if(a[i]!=0){
			b.pb(a[i]);
			if(count(all(b), a[i])==2) res++;	
			else if(count(all(b), a[i])==3){
				cout<<-1;
				return;
			}
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
