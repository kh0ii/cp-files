// Problem: A. Nicholas and Permutation
// Contest: Codeforces - Codeforces Round #354 (Div. 2)
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
	int best=0, least=n, index1=0, index2=0;
	FOR(i, n){
		int j;
		cin>>j;
		if(j>best){
			best = j;
			index1 = i;
		}
		if(j<least){
			least = j;
			index2 = i;
		}
	}
	cout<<max(max(n-1-index1, index1), max(n-1-index2, index2));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
