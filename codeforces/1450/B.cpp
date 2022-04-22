#include <bits/stdc++.h>
using namespace std;

// Data types and numbers
#define ll long long 
#define MOD 1000000007

// Vector
#define pb push_back
#define pf push_front

#define vi vector<int>
#define vii vector<vi>
#define vs vector<string>
#define vb vector<bool>

#define sz(x) (int((x).size()))
#define bg(x) begin(x)
#define all(x) (x).begin(), (x).end()
#define rall(x) x.rbegin(), x.rend() 
#define sor(x) sort(all(x)) 

// Loops
#define each(a,x) for (auto& a: x)
#define FOR(i, n) for(int i=0; i<n; i++)

void solve(){
    int n, k;
    cin>>n>>k;
    vi x(n), y(n);
    FOR(i, n) cin>>x[i]>>y[i];
    int ans=-1;
    FOR(i, n){
        int maxx = 0;
        FOR(j, n){
            maxx = max(maxx, abs(x[j]-x[i])+abs(y[i]-y[j]));
        }
        if(maxx <= k) ans=1;
    }
    cout<<ans<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
