#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx2,tune=native")

const int MOD = 1e9+7; // 998244353;
using ll = long long; 
using str = string;

// Pairs
using pi = pair<int,int>;
using pl = pair<ll,ll>;
#define F first
#define S second
#define mp make_pair

// Vector
#define pb push_back
#define pf push_front

#define vi vector<int>
#define vii vector<vi>
#define vpi vector<pair<int, int>>
#define vst vector<str>

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

void solve(){
    int n; cin>>n;
    int a[n], odd=0, even=0;
    FORN(i, n){
    	cin>>a[i];
    	if(a[i]%2==0) even++;
    	else odd++;
    }
    if(even-odd>1 or even-odd<0){
    	cout<<-1<<'\n';
    	return;
    }
    int ans=0;
    FORN(i, n){
    	if(a[i]%2!=i%2 and i%2==0){
    		for(int k=i; k<n; k++){
    			if(a[k]%2!=k%2 and k%2==1){
    				swap(a[i], a[k]);
    				ans++;
    				break;
    			}
    		}
    	} else if(a[i]%2!=i%2 and i%2==1){
    		for(int k=i; k<n; k++){
    			if(a[k]%2!=k%2 and k%2==0){
    				swap(a[i], a[k]);
    				ans++;
    				break;
    			}
    		}
    	}
    }
    cout<<ans<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin>>t; while(t--)
    solve();
    return 0;
}
