// Problem: A. QAQ
// Contest: Codeforces - Codeforces Round #447 (Div. 2)
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

int find(string s, int k){
	int res1=0, res2=0;
	for(int i=0; i<k; i++){
		if(s[i]=='Q') res1++;
	}
	for(int i=k+1; i<sz(s); i++){
		if(s[i]=='Q') res2++;
	}
	return res1*res2;
}

void solve(){
	string s;
	cin>>s;
	auto n = count(all(s), 'A');
	int i=0, ans=0;
	while(n--){
		for(int j=i; j<sz(s); j++){
			if(s[j]=='A'){
				ans+=find(s, j);
				i = j+1;
				break;
			}
		}
	}
	cout<<ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
