// Problem: A. Word Correction
// Contest: Codeforces - Educational Codeforces Round 38 (Rated for Div. 2)
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

bool isvowel(char c){
	if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u' or c=='y') return true;
	return false;
}

void solve(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	for(int i=1; i<n; i++){
		if(isvowel(s[i]) and isvowel(s[i-1])){
			for(int j=i; j<n-1; j++) s[j] = s[j+1];
			n--;
			i--;
		}
	}
	FOR(i, n) cout<<s[i];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
