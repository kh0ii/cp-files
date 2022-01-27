#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;
int n, a[104];
void solve(){
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>a[i];
	int st = 0, cur = 1;
	for(int i=0; i<n; i++){
		if(i == 0){
			if(a[i])
				++cur;
		}
		else{
			if(a[i]){
				if(a[i-1])
					cur = cur + 5;
				else
					++cur;
			}
			else{
				if(!a[i-1]){
					cout<<-1<<'\n';
					return;
				}
			}
		}
	}
	cout<<cur<<'\n';
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}