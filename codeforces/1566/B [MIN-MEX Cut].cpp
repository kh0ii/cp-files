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
    string s;
    cin>>s;
    int res=0, count0=0;
    for(int i=1; i<sz(s); i++){
        if(s[i]!=s[i-1]) res++;
    }
    for(int i=0; i<sz(s); i++){
        if(s[i]=='0'){
            count0++;
            while(s[i]=='0') i++;
        }
    }
    if(res==0 and s[0]=='1') cout<<0<<'\n';
    else if(res==0 and s[0]=='0') cout<<1<<'\n';
    else if(res==1) cout<<1<<'\n';
    else cout<<min(count0, 2)<<'\n';
}

int main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t; while(t--) solve();
	return 0;
}

