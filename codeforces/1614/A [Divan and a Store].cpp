#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;
int n, a[104], l, r, k;

void solve(){
	cin>>n>>l>>r>>k;
	for(int i = 0; i < n; i++)
		cin>>a[i];
	sort(a, a+n);
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(a[i] >= l){
			for(int j = i; j < n and a[j] <= r and k >= a[j]; j++){
				++cnt;
				k -= a[j];
			}
			break;
		}
	}
	cout<<cnt<<'\n';
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    	solve();
    return 0;
}