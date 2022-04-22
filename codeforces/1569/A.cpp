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
#define sorr(x) sort(rall(x)) 

// Loops
#define each(a,x) for (auto& a: x)
#define FOR(i, k, n) for(int i=k; i<n; i++)
#define FORN(i, n) for(int i=0; i<n; i++)

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(s.find("ab")!=string::npos){
        cout<<s.find("ab")+1<<' '<<s.find("ab")+2<<"\n";
    }
    else if(s.find("ba")!=string::npos){
        cout<<s.find("ba")+1<<' '<<s.find("ba")+2<<"\n";
    }
    else{
        cout<<-1<<' '<<-1<<'\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
