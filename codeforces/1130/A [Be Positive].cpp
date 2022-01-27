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
    double n;
    cin>>n;
    int pos=0, neg=0, j, lim=ceil(n/2);
    while(n--){
        cin>>j;
        if(j>0) pos++;
        else if(j<0) neg++;
    }
    if(pos>=lim){
        cout<<1;
    }
    else if(neg>=lim){
        cout<<-1;
    }
    else cout<<0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

