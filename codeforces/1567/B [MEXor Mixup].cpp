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
    int a, b;
    cin>>a>>b;
    int XOR;
    if (a % 4 == 1)  XOR = a - 1;
    else if (a % 4 == 2)XOR = 1;
    else if (a % 4 == 3) XOR = a;
    else XOR = 0;
 
    if(XOR==b) cout<<a;
    else if(XOR!=b && (XOR^b)==a) cout<<a+2;
    else cout<<a+1;
    cout<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
