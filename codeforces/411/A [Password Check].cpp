// Problem: A. Password Check
// Contest: Codeforces - Coder-Strike 2014 - Qualification Round
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
	bool a[3]{false};
	if(sz(s)<5){
		cout<<"Too weak";
		return;
	}
	FOR(i, sz(s)){
		if(isdigit(s[i])) a[0] = true;
		else if(islower(s[i])) a[1] = true;
		else if(isupper(s[i])) a[2] = true;
	}
	for(int i=0; i<3; i++){
		if(!a[i]){
			cout<<"Too weak";
			return;
		}
	}
	cout<<"Correct";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
