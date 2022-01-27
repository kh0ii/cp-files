#include <bits/stdc++.h>
using namespace std;

// Data types and numbers
#define ll long long int
#define db double
const ll MOD = 1e9 + 7;


// Vector
#define pb push_back
#define pf push_front

#define vi vector<int>
#define vii vector<vi>
#define vs vector<string>
#define vb vector<bool>

#define sz(x) (int(x.size()))
#define bg(x) begin(x)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sor(x) sort(all(x))

// Loops
#define FOR(a, b) for(int i=(a); i<b; ++i)
#define each(a, x) for(auto& a: x)

void solve(){
    string s;
    cin>>s;
    int a, ans=0;
    string t;
    while(sz(s)>1){
        a=0;
        t.clear();
        ans++;
        for(int i=0; i<sz(s); i++){
            a+=(s[i]-'0');
        }
        while(a>0){
            t+=char(a%10 + '0');
            a/=10;
        }
        s.clear();
        s = t;
    }
    cout<<ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

