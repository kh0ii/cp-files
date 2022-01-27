// Problem: A. MUH and Sticks
// Contest: Codeforces - Codeforces Round #269 (Div. 2)
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
	vi a;
	FOR(i, 6){
		int j;
		cin>>j;
		a.pb(j);
	}
	bool flag=false;
	FOR(i, 6){
		if(count(all(a), a[i])>=4){
			int l = a[i];
			FOR(j, 4){
				auto k = find(all(a), l);
				a[k-a.begin()] = 0;
			}
			flag=true;
		}
	}
	if(!flag){
		cout<<"Alien";
		return;
	}
	int x=0, y=10;
	FOR(i, 6){
		if(a[i]!=0){
			x=max(x, a[i]);
			y=min(y, a[i]);
		}
	}
	if(x>y) cout<<"Bear";
	else cout<<"Elephant";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
