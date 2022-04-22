// Problem: A. Chewbaсca and Number
// Contest: Codeforces - Codeforces Round #291 (Div. 2)
// URL: https://codeforces.com/contest/514/problem/A
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
	string s;
	cin>>s;
	for(int i=0; i<s.size(); i++){
		if(s[i]-'0'>4){
			if(s[i]=='9'){
				if(i>0) s[i] = '0';
			}
			else {
				s[i] = char('9'-s[i]+'0');
			}
		}
	}
	cout<<s;
	return 0;
}
