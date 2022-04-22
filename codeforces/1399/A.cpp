#include <bits/stdc++.h>
using namespace std;

#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FOR1(a, c) for (int(a) = 1; (a) <= (c); (a)++)
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
typedef long long int ll;
int n;
bool flag;
void solve(){
	cin>>n;
	flag=true;
	int a[n];
	FOR(i, n) cin>>a[i];
	sort(a, a+n);
	FOR(i, n-1){
		if(abs(a[i]-a[i+1])>1){
			flag=false;
			break;
		}
	}
	if(flag)
		cout<<"YES"<<"\n";
	else cout<<"NO"<<"\n";
}

int main()
{    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
	#ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("error.txt", "w", stderr);
    	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin>>t;
	while(t--){
		solve();
	}  
  
    cerr << "Time taken : " << (float)clock() / CLOCKS_PER_SEC *3000 << " ms" << endl;
    return 0;
}