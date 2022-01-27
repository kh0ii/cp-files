// Problem: A. SwapSort
// Contest: Codeforces - Codeforces Round #277.5 (Div. 2)
// URL: https://codeforces.com/problemset/problem/489/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

// Data types and numbers
#define ll long long 
#define MOD 1000000007

// Vector
#define pb push_back
#define pf push_front
#define mp make_pair
#define F first
#define S second

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
    int n; cin>>n;
    int a[n]; FORN(i, n) cin>>a[i];
    vector<pair<int, int>> swaps;
    FORN(i, n){
    	int j = i;
    	FOR(k, i, n){
    		if(a[k]<a[j]) j = k;
    	}
    	if(a[j]!=a[i]) swaps.pb(mp(i, j));
    	swap(a[i], a[j]);
    }
    cout<<sz(swaps)<<'\n';
    FORN(i, sz(swaps)) cout<<swaps[i].F<<' '<<swaps[i].S<<'\n';
}

int main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
