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

// some useful defines
#define sfor(x) fixed<<setprecision(x)
#define deb(x) cout<<"- Debug: "<<x<<'\n';

void solve(){
    int n;
    cin>>n;
    vi a(n);
    int k=0;
    FORN(i, n){
        cin>>a[i];
        k = max(k, a[i]);
    }
    int res=0;
    for(int j=0; j<n; j++){
        int ans=1;
        // Left
        for(int i=j-1; i>=0; i--){
            if(a[i]<=a[i+1]) ans++;
            else{
                break;
            }
        }
        // Right
        for(int i=j+1; i<n; i++){
            if(a[i]<=a[i-1]) ans++;
            else{
                break;
            }
        }
        res = max(res, ans);
    }
    cout<<res;
}

int main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int t; cin>>t; while(t--)
    solve();
	return 0;
}

