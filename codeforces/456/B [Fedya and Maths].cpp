// Problem: B. Fedya and Maths
// Contest: Codeforces - Codeforces Round #260 (Div. 2)
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
	if(sz(s)<2){
		int n = (s[sz(s)-1] - '0')%4;
		cout<<int((1+pow(2, n) + pow(3, n) + pow(4, n)))%5;
		return;
	}
	int n = (s[sz(s)-1] - '0' + (s[sz(s)-2]-'0')*10)%4;
	cout<<int((1+pow(2, n)+pow(3, n)+pow(4, n)))%5;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
