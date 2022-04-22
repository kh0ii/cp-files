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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int begin=0;
    for(int i=0; i<n; i++){
        if(s[i]=='+') begin++;
        else {
            if(begin>0) begin--;
        }
    }
    cout<<begin;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

