// Problem: A. Phone Numbers
// Contest: Codeforces - Codeforces Round #513 by Barcelona Bootcamp (rated, Div. 1 + Div. 2)
// Memory Limit: 512 MB
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
	string s;
	cin>>s;
	int cnt=0;
	FOR(i, sz(s)){
		if(s[i]=='8') cnt++;
	}
	if(cnt==0){
		cout<<0;
		return;
	}
	while(cnt*11>sz(s)) cnt--;
	cout<<cnt;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
