#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;
string s, t;

void solve(){
	cin>>s>>t;
	int a, b, c;
	a = b = c = 0;
	for(int i=0; i<s.size(); i++){
		a += (s[i] == 'a');
		b += (s[i] == 'b');
		c += (s[i] == 'c');
	}
	sort(s.begin(), s.end());
	if(!(a and b and c) or t != "abc")
		cout<<s;
	else{
		for(int i=0; i<a; i++) cout<<'a';
		for(int i=0; i<c; i++) cout<<'c';
		for(int i=0; i<b; i++) cout<<'b';
		for(int i=a+b+c; i<s.size(); i++)
			cout<<s[i];
	}
	cout<<'\n';
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int q;
    cin>>q;
    while(q--)
    	solve();
    return 0;
}