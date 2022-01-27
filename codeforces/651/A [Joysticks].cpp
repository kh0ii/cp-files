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

int play(int ans, int a, int b){
    if(a<=2 and b<=2){
        if(a==2 or b==2) cout<<ans+1;
        else cout<<ans;
        return 0;
    }
    else if(a<=2){
        while(b>2){
            b-=2;
            a++;
            ans++;
        }
        if(b<a) swap(a, b);
        return play(ans, a, b);
    }
    else{
        while(a>=2 and b>=2){
            a++;
            b-=2;
            ans++;
        }
        if(a>b) swap(a, b);
        return play(ans, a, b);
    }
}

void solve(){
    int a, b; cin>>a>>b;
    int ans=0;
    if(a>b) swap(a, b);
    play(ans, a, b);
}

int main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int t; cin>>t; while(t--)
    solve();
	return 0;
}

