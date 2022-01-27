// Problem: A. Points in Segments
// Contest: Codeforces - Codeforces Round #501 (Div. 3)
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define FOR(i, n) for(int i=0; i<n; i++)
typedef vector<int> vi;
typedef long long ll;
int n, m;
void solve(){
	cin>>n>>m;
	vi a;
	while(n--){
		int x, y;
		cin>>x>>y;
		for(int i=x; i<=y; i++){
			if(find(a.begin(), a.end(), i)==a.end()) a.PB(i);
		}
	}
	vi b;
	int res=0;
	for(int i=1; i<=m; i++){
		if(find(a.begin(), a.end(), i)==a.end()){
			b.PB(i);
			res++;
		}
	}
	cout<<res<<'\n';
	for(size_t i=0; i<b.size(); i++) cout<<b[i]<<' ';
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
	return 0;
}
