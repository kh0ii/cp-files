#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx2,tune=native")

const int MOD = 1e9+7; // 998244353;
using ll = long long; 
using str = string;

// Pairs
using pi = pair<int,int>;
using pl = pair<ll,ll>;
#define F first
#define S second
#define mp make_pair

// Vector
#define pb push_back
#define pf push_front

#define vi vector<int>
#define vii vector<vi>
#define vpi vector<pair<int, int>>
#define vst vector<str>

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

void solve(){
    int n; cin>>n;
    string s, t;
    cin>>s>>t;
    vi swaps;
    for(int i=0; i<n-1; i++){
    	if(s[i]!=t[i]){
    		int k = -1;
    		for(int j=i+1; j<n; j++){
    			if(s[j]==t[i]){
    				k = j;
    				break;
    			}
    		}
    		if(k==-1){
    			cout<<k; return;
    		}
    		for(int j=k-1; j>=i; j--){
    			swaps.pb(j+1);
    			swap(s[j], s[j+1]);
    		}
    	}
    } 
    if(s==t){
        cout<<sz(swaps)<<'\n';
        FORN(i, sz(swaps)) cout<<swaps[i]<<' ';
    }
    else cout<<-1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
