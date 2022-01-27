// Problem: B. A and B and Compilation Errors
// Contest: Codeforces - Codeforces Round #294 (Div. 2)
// URL: https://codeforces.com/problemset/problem/519/B
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
	int n;
	cin>>n;
	int a=0, b=0, c=0, j;
	for(int i=0; i<n; i++){
		cin>>j;
		a+=j;
	}
	for(int i=0; i<n-1; i++){
		cin>>j;
		b+=j;
	}
	for(int i=0; i<n-2; i++){
		cin>>j;
		c+=j;
	}
	cout<<a-b<<'\n'<<b-c;
	return 0;
}
