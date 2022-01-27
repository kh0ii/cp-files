#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimization ("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx2,tune=native")

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

bool isprime(int n){
    if(n==1 || n==0) return false;
    if(n==2 || n==3) return true;
    else{
        for(int i=2; i*i<=n; i++){
            if(n%i==0) return false;
        }
    }
    return true;
}

void solve(){
    int n;
    cin>>n;
    ll a[n];
    FORN(i, n) cin>>a[i];
    FORN(i, n){
        if(sqrt(a[i])==int(sqrt(a[i]))){
            if(isprime(int(sqrt(a[i])))) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else cout<<"NO\n";
    }
}

int main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int t; cin>>t; while(t--)
    solve();
	return 0;
}

