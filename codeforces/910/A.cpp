// Problem: A. The Way to Home
// Contest: Codeforces - Testing Round #14 (Unrated)
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
	int n, d;
	cin>>n>>d;
	string s;
	cin>>s;
	int pos=0, res=0;
	while(true){
		for(int i=d+pos; i>=pos; i--){
			if(i==pos){
				cout<<-1;
				return;
			}
			if(s[i]=='1'){
				pos=i;
				res++;
				break;
			}
		}
		if(pos==n-1){
			cout<<res;
			return;
		}
	}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
