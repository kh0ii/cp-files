#include <bits/stdc++.h>
using namespace std;

#define sz(x) int(x.size())
vector<int> fac;

void gfac(int n){
	for(int i=1; i*i<=n; i++){
		if(n%i==0){
			fac.push_back(i); 
			if(n/i!=i) fac.push_back(n/i);
		}
	}
}

int main() {
	int a, b; cin>>a>>b;
	gfac(__gcd(a, b));
	sort(fac.begin(), fac.end());
	int q, l, h; cin>>q;
	while(q--){
		cin>>l>>h;
		auto d = lower_bound(fac.begin(), fac.end(), h);
		if(*d==h or *d==l) cout<<*d<<'\n';
		else {
			d--;
			if(*d>h or *d<l) cout<<-1<<"\n";
			else cout<<*d<<'\n';
		}
	}
}
