// Problem: C. Guess the Array
// Contest: Codeforces - Technocup 2017 - Elimination Round 1 (Unofficially Open for Everyone, Rated for Div. 2)
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
	int n;
	cin>>n;
	int a[n];
	int res1, res2, res3;
	cout<<"? 1 2"<<endl;
	cin>>res1;
	cout<<"? 2 3"<<endl;
	cin>>res2;
	cout<<"? 1 3"<<endl;
	cin>>res3;
	a[0] = (res1+res2+res3)/2 - res2;
	a[1] = res1 - a[0];
	a[2] = res2 - a[1];
	for(int i=3; i<n; i++){
		int res;
		cout<<"? 1 "<<i+1<<endl;
		cin>>res;
		a[i] = res - a[0];
	}
	cout<<"! ";
	FOR(i, n) cout<<a[i]<<' ';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
