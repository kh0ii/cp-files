// Problem: B. Ilya and Queries
// Contest: Codeforces - Codeforces Round #186 (Div. 2)
// URL: https://codeforces.com/problemset/problem/313/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
typedef vector<int> VI;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin>>s;
	int a[s.size()], m, sum=0;
	a[0] = 0;
	cin>>m;
	for(int i=0; i<s.size(); i++){
		a[i+1] = sum;
		if(s[i]==s[i+1]){
			a[i+1]++;
			sum++;
		}
	}
	int l, r;
	while(m--){
		cin>>l>>r;
		cout<<a[r-1]-a[l-1]<<'\n';
	}
	return 0;
}
