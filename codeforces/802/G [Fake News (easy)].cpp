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
#define bg(x) (x).begin()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend() 
#define sor(x) sort(all(x)) 
#define sorr(x) sort(rall(x)) 

// Loops
#define each(a,x) for (auto& a: x)
#define FOR(i, k, n) for(int i=k; i<n; i++)
#define FORN(i, n) for(int i=0; i<n; i++)

// Useful defines
#define sfor(x) fixed<<setprecision(x)
#define deb(x) cout<<"--Debug: "<<x<<'\n';

void solve(){
    string s;
    cin>>s;
    int n=0;
    FORN(i, sz(s)){
        if(s[i]=='h' and n==0) n++;
        else if(s[i]=='e' and n==1) n++;
        else if(s[i]=='i' and n==2) n++;
        else if(s[i]=='d' and n==3) n++;
        else if(s[i]=='i' and n==4){
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
}

int main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int t; cin>>t; while(t--)
    solve();
	return 0;
}

