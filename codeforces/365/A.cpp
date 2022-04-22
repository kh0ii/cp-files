// Problem: A. Good Number
// Contest: Codeforces - Codeforces Round #213 (Div. 2)
// URL: https://codeforces.com/contest/365/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
typedef vector<int> VI;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	cin>>n>>k;
	string s;
	int res=0;
	bool flag;
	while(n--){
		flag=true;
		cin>>s;
		for(int i=0; i<=k; i++){
			if(s.find(char(i+'0'))==string::npos){
				flag=false;
				break;
			}
		}
		if(flag) res++;
	}
	cout<<res;
	return 0;
}
