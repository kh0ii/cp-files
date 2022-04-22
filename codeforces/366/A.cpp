// Problem: A. Dima and Guards
// Contest: Codeforces - Codeforces Round #214 (Div. 2)
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define MOD 1000000007

#define pb push_back
#define pf push_front
#define vi vector<int>
#define sz(x) (int((x).size()))
#define bg(x) begin(x)
#define all(x) (x).begin(), (x).end()
#define rall(x) x.rbegin(), x.rend() 
#define sor(x) sort(all(x)) 

#define each(a,x) for (auto& a: x)
#define FOR(i, n) for(int i=0; i<n; i++)

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
   	int r=-1, r1=0, r2=0;
    for (int i = 1; i <= 4; i++) {
    	int a, b, c, d;
    	cin>>a>>b>>c>>d;
    	if (r==-1 && min(a, b)+min(c, d)<=n){
        	r = i;
        	r1 = min(a, b);
        	r2 = n-r1;
      	}
    }
    if (r == -1) cout<<-1;
    else cout<<r<<' '<<r1<<' '<<r2;

  	return 0;
}
