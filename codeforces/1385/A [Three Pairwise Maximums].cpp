#include <bits/stdc++.h>
using namespace std;

#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FOR1(a, c) for (int(a) = 1; (a) <= (c); (a)++)
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
typedef long long int ll;
int a[3];
void solve(){
	FOR(i, 3) cin>>a[i];
	sort(a, a+3);
	if(a[0]==a[1]&&a[1]==a[2]){
		cout<<"YES\n";
		cout<<a[0]<<' '<<a[1]<<' '<<a[2]<<'\n';
	}
	else if(a[2]!=a[1]&&a[2]!=a[0]) cout<<"NO"<<"\n";
	else{
		cout<<"YES"<<'\n';
		cout<<a[2]<<' ';
		cout<<a[0]<<' '<<1<<'\n';
	}
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