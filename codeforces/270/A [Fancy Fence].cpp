// Problem: A. Fancy Fence
// Contest: Codeforces - Codeforces Round #165 (Div. 2)
// URL: https://codeforces.com/problemset/problem/270/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long

typedef vector<int> VI;

bool solve(float n){
	float k = 360 / (180-n);
	if(k == int(k)) return true;
    else return false;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	float t, n;
	cin>>t;
	while(t--){
		cin>>n;
		if(solve(n)){
			cout<<"YES\n";
		}
		else cout<<"NO\n";
	}
	return 0;
}
