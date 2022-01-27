// Problem: A. Little Elephant and Bits
// Contest: Codeforces - Codeforces Round #157 (Div. 1)
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
	string s;
	cin>>s;
	bool flag = false;
	for(int i=0; i<sz(s); i++){
		if(s[i]=='0'){
			s[i] = '-';
			flag = true;
			break;
		}
	}
	if(flag){
		for(int i=0; i<sz(s); i++)
			if(s[i]!='-') cout<<s[i];
	}
	else{
		for(int i=0; i<sz(s)-1; i++){
			cout<<s[i];
		}
	}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
