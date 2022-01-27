// Problem: A Variety of Operations
// Contest: Codeforces
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define vi vector<int>
#define FOR(i, n) for(int i=0; i<n; i++)
#define MOD 1000000007
#define sz(x) (int((x).size()))
#define ll long long
#define all(n) (n).begin(), (n).end()

void solve(){
	int c, d;
	cin>>c>>d;
	if(abs(c-d)%2==1){
		cout<<"-1\n";
		return;
	}
	if(c==d&&c==0) cout<<"0\n";
	else if(c==d) cout<<"1\n";
	else cout<<"2\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
