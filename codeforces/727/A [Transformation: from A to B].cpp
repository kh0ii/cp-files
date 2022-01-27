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
    int n, k; cin>>n>>k;
    vi steps;
    steps.pb(k);
    while(true){
        if((k%2==1 and k%10!=1) or k==0){
            cout<<"NO\n";
            break;
        }
        if(k%2==0){
            k/=2; steps.insert(steps.begin(), k);
        }
        else if(k%10==1) {
            k=(k-1)/10;
            steps.insert(steps.begin(), k);
        }
        if(n==k){
            cout<<"YES\n"<<sz(steps)<<'\n';
            FORN(i, sz(steps)) cout<<steps[i]<<' ';
            break;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
