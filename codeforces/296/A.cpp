#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;
int n, a[103];
unordered_map<int, int> mp;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(int i=0; i<n; i++){
    	cin>>a[i];
    	mp[a[i]]++;
    }
    for(auto k : mp){
    	if(k.second > (n+1)/2){
    		cout<<"NO";
    		return 0;
    	}
    }
    cout<<"YES";
    return 0;
}