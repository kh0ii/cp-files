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
    int n;
    string a, b;
    cin>>n;
    cin>>a>>b;
    int ans=0;
    for(int i=0; i<n; i++){
        if(a[i]=='0' and b[i]=='0'){
            if(a[i-1]=='1' and b[i-1]=='1') ans+=2;
            else if(a[i+1]=='1' and b[i+1]=='1'){
                a[i+1] = '-'; b[i+1] = '-';
                i++;
                ans+=2;
            }
            else ans++;
        }
        else if(a[i]!=b[i]) ans+=2;
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

