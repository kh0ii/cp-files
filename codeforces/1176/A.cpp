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
    ll n;
    cin>>n;
    int _2=0, _3=0, _5=0;
    while(n%2==0){
        _2++;
         n/=2;
    }
     while(n%3==0){
        _3++;
        n/=3;
    }
    while(n%5==0){
        _5++;
        n/=5;
    }
    if(n!=1){
        cout<<-1<<'\n';
    }
    else{
        cout<<_2 + (_3*2) + (_5*3)<<'\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
