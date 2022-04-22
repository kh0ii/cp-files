#include "bits/stdc++.h"
using namespace std;
#define int long long
const int inf = 1e9+9, mod = 1e9+7;
int n, pos[200005];
pair<int, int> a[200005];

void solve(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i].first;
		a[i].second = i;
	}
	sort(a, a+n, [](pair<int, int> a, pair<int, int> b){
		return a.first > b.first;
	});
	int l = -1, r = 1, cur = 0;
	for(int i=0; i<n; i++){
		if(cur & 1){
			pos[a[i].second] = r;
			++r;
		}
		else{
			pos[a[i].second] = l;
			--l;
		}
		++cur;
	}
	int sm = 0;
	for(int i=0; i<n; i++){
		sm += abs(pos[a[i].second]) * a[i].first * 2;
	}
	cout<<sm<<'\n';
	cout<<0;
	for(int i=0; i<n; i++)
		cout<<' '<<pos[i];
	cout<<'\n';
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    	solve();
    return 0;
}
// 6 4 4