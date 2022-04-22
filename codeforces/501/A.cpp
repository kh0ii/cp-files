// Problem: A. Contest
// Contest: Codeforces - Codeforces Round #285 (Div. 2)
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
	int a, b, c, d;
	cin>>a>>b>>c>>d;
	int x = max(3*a/10, a-(a/250*c));
	int y = max(3*b/10, b-(b/250*d));
	if(x>y) cout<<"Misha";
	else if(y>x) cout<<"Vasya";
	else cout<<"Tie";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
