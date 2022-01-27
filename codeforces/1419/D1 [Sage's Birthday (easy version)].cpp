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
    FORN(i, n) cin>>a[i];
    sor(a);
    int l=0, r=n-1;
    if(n<=2) cout<<0<<'\n';
    else cout<<(n%2==0 ? n/2-1 : n/2)<<'\n';
    while(true){
        if(r>l) cout<<a[r]<<' '<<a[l]<<' ';
        else{
            if(n%2==1) cout<<a[l];
            break;
        }
        l++; r--;
    }
}

int main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int t; cin>>t; while(t--)
    solve();
	return 0;
}

