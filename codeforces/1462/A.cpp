// Problem: A. Favorite Sequence
// Contest: Codeforces - Codeforces Round #690 (Div. 3)
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define vi vector<int>
#define FOR(i, n) for(int i=0; i<n; i++)
#define MOD 1000000007
#define sz(x) (int((x).size()))
#define ll long long
#define all(n) (n).begin(), (n).end()

void solve(){
	int n;
	cin>>n;
	int a[n];
	FOR(i, n) cin>>a[i];
	int i=0, j=0;
	int d = n;
	while(d>0){
		if(i==j){
			cout<<a[i]<<' ';
			d--;
			i++;
		}
		else{
			cout<<a[n-1-j]<<' ';
			j++;
			d--;
		}
	}
	cout<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
