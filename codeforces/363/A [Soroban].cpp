// Problem: A. Soroban
// Contest: Codeforces - Codeforces Round #211 (Div. 2)
// URL: https://codeforces.com/contest/363/problem/A
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
	int n;
	cin>>n;
	if(n==0){
	    cout<<"O-|-OOOO";
	}
	while(n>0){
		int a = n%10;
		if(a>=5){
			cout<<"-O|";
			a-=5;
		}
		else cout<<"O-|";
		for(int i=0; i<a; i++){
			cout<<'O';
		}
		cout<<'-';
		for(int i=0; i<4-a; i++) cout<<'O';
		cout<<'\n';
		n/=10;
	}
	return 0;
}
