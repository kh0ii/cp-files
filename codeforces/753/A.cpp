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

int add(vi a, int n, int curr){
    if(n>=curr){
        a.pb(curr);
        return add(a, n-curr, curr+1);
    }
    else{
        if(n>0) a[sz(a)-1]+=n;
        cout<<sz(a)<<'\n';
        FORN(i, sz(a)) cout<<a[i]<<' ';
        return 0;
    }
}

void solve(){
    int n; cin>>n;
    vi a;
    int curr=1;
    add(a, n, curr);
}

int main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int t; cin>>t; while(t--)
    solve();
	return 0;
}

