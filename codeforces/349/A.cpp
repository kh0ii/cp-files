// Problem: A. Cinema Line
// Contest: Codeforces - Codeforces Round #202 (Div. 2)
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
	int n;
	cin>>n;
	int j, _25=0, _50=0;
	while(n--){
		cin>>j;
		if(j==25) _25++;
		else if(j==50){
			if(_25>0){
				_25--;
				_50++;
			}
			else{
				cout<<"NO";
				return;
			}
		}
		else if(j==100){
			if(_50>0&&_25>0){
				_25--;
				_50--;

			}
			else if(_25>2) _25-=3;
			else{
				cout<<"NO";
				return;
			}
		}
	}
	cout<<"YES";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
