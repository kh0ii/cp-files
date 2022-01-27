// Problem: A. Road To Zero
// URL: https://codeforces.com/problemset/problem/1342/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;

// Data types and numbers
#define ll long long 
#define MOD 1000000007

// Vector
#define pb push_back
#define pf push_front
#define mp make_pair

#define vi vector<int>
#define vii vector<vi>
#define vs vector<string>
#define vb vector<bool>

#define sz(x) (int((x).size()))
#define bg(x) (x).begin()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend() 
#define sor(x) sort(all(x)) 
#define sorr(x) sort(rall(x)) 

// Loops
#define each(a,x) for (auto& a: x)
#define FOR(i, k, n) for(int i=k; i<n; i++)
#define FORN(i, n) for(int i=0; i<n; i++)

// Useful defines
#define sfor(x) fixed<<setprecision(x)
#define deb(x) cout<<"--Debug: "<<x<<'\n';

void solve(){
    ll a, b, c, d; cin>>a>>b>>c>>d;
    ll total=0;
    if(c*2<=d){
    	cout<<abs(0-a)*c + abs(0-b)*c<<'\n';
    	return;
    }
    a = abs(0-a); b = abs(0-b);
	total += 1LL*min(a, b);
	a -= 1LL*total; b-=1LL*total;
	total*=1LL*d;
	cout<<total+(max(a, b)*c*1LL)<<'\n';
}

int main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
