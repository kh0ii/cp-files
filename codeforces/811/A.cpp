// Problem: A. Vladik and Courtesy
// Contest: Codeforces - Codeforces Round #416 (Div. 2)
// Memory Limit: 256 MB
// Time Limit: 2000 ms

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

void solve(){
	int a, b;
	cin>>a>>b;
	int i=1;
	while(true){
		if(i%2==1){
			if(a>=i) a-=i;
			else{
				cout<<"Vladik";
				return;
			}
		}
		else{
			if(b>=i) b-=i;
			else {
				cout<<"Valera";
				return;
			}
		}
		i++;
	}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
