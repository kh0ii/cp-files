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
    int n;
    cin>>n;
    vi a(n);
    vb b(n, false);
    FOR(i, n) cin>>a[i];
    sor(a);
    int ans=n;
    FOR(i, n){
        if(!b[i]){
            for(int j=i+1; j<n; j++){
                if(a[j]%a[i]==0 && !b[j]){
                    b[j] = true;
                    ans--;
                }
            }
            b[i] = true;
        }
    }
    cout<<ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
