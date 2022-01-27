#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;
int n, k;
void solve(){
	cin>>n>>k;
    if(k > n)
    	cout<<"NO\n";
    else if(k%2 == 0){
    	if(n%2 == 1)
    		cout<<"NO\n";
    	else{
    		cout<<"YES\n";
    		while(k > 1){
    			cout<<1<<' ';
    			n -= 1;
    			--k;
    		}
    		cout<<n<<'\n';
    	}
    }
    else{
    	if(n%2 == 0){
    		if(n < k*2){
    			cout<<"NO\n";
    			return;
    		}
    		cout<<"YES\n";
    		while(k > 1){
    			cout<<2<<' ';
    			n -= 2;
    			--k;
    		}
    		cout<<n<<'\n';
    	}
    	else{
    		cout<<"YES\n";
    		while(k > 1){
    			cout<<1<<' ';
    			n -= 1;
    			--k;
    		}
    		cout<<n<<'\n';
    	}
    }
}
int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}