#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    map<int, bool> mp;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    	cin>>a[i];
    sort(a, a+n);
    for(int i=0; i<n; i++){
    	if(a[i] == 1){
    		if(!mp[a[i]])
    			mp[a[i]] = true;
    		else if(!mp[a[i] + 1])
    			mp[a[i] + 1] = true;
    	}
    	else{
    		if(!mp[a[i] - 1])
    			mp[a[i] - 1] = true;
    		else if(!mp[a[i]])
    			mp[a[i]] = true;
    		else if(!mp[a[i] + 1])
    			mp[a[i] + 1] = true;
    	}
    }
    int cnt = 0;
    for(int i=1; i<=a[n-1]+1; i++){
    	cnt += mp[i];
    }
    cout<<cnt;
    return 0;
}