// Problem: C. Similar Pairs
// URL: https://codeforces.com/problemset/problem/1360/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms

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
   	int n; cin>>n;
   	vi a(n);
   	int odd(0), even(0);
   	FORN(i, n){
   		cin>>a[i];
   		(a[i]%2 ? odd++ : even++);
   	}
   	if(odd%2!=even%2){cout<<"NO\n"; return;}
   	else{
   		if(even%2==0) cout<<"YES\n";
   		else{
   			sor(a);
   			for(int i=1; i<n; i++){
   				if(a[i]-a[i-1]==1){
   					cout<<"YES\n";
   					return;
   				}
   			}
   			cout<<"NO\n";
   		}
   	}
}

int main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
