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
#define bg(x) begin(x)
#define all(x) (x).begin(), (x).end()
#define rall(x) x.rbegin(), x.rend() 
#define sor(x) sort(all(x)) 
#define sorr(x) sort(rall(x)) 

// Loops
#define each(a,x) for (auto& a: x)
#define FOR(i, k, n) for(int i=k; i<n; i++)
#define FORN(i, n) for(int i=0; i<n; i++)

void solve(){
    int l, r;
    cin>>l>>r;
    ll ans=0;
    while(l>0 or r>0){
        ans+=(r-l);
        l/=10; r/=10;
    }
    cout<<ans<<'\n';
}

int main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t; while(t--)
    solve();
	return 0;
}

