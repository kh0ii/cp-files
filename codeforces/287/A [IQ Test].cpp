// Problem: A. IQ Test
// Contest: Codeforces - Codeforces Round #176 (Div. 2)
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
string s[4];
bool check(string s[4], int n, int m){
	int res1=0, res2=0;
	(s[n][m]=='#' ? res1++ : res2++);
	(s[n+1][m]=='#' ? res1++ : res2++);
	(s[n][m+1]=='#' ? res1++ : res2++);
	(s[n+1][m+1]=='#' ? res1++ : res2++);
	if(res2==res1) return false;
	return (res1>=3||res2>=3);
}
int res=0;

void solve(){
	FOR(i, 4) cin>>s[i];
	int n=0, m=0;
	while(true){
		if(check(s, n, m)){
			cout<<"YES";
			return;
		}
		if(m==2){
			res++;
			m=-1;
			n++;
			cerr<<'\n';
		}
		m++;
		if(res>2){
			cout<<"NO";
			return;
		}
		cerr<<n<<' '<<m<<' ';
	}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
