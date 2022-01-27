// Problem: A. King Moves
// Contest: Codeforces - Educational Codeforces Round 16
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
	string s;
	cin>>s;
	if(s[0]=='a'||s[0]=='h'){
		if(s[1]=='1'||s[1]=='8') cout<<3;
		else cout<<5;
	}
	else if(s[1]=='8'||s[1]=='1'){
		cout<<5;
	}	
	else cout<<8;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
