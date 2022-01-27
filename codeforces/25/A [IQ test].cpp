#include <bits/stdc++.h>
using namespace std;

#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FOR1(a, c) for (int(a) = 1; (a) <= (c); (a)++)
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
typedef long long int ll;
int n, odd=0, even=0, a, b, i=1;
void solve(){
	cin>>n;
	if(n%2==0){
		even++;
		a = i;
	}
	else {
		odd++;
		b = i;
	}
	i++;
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
	cout<<(odd>even ? a : b);
  
    cerr << "Time taken : " << (float)clock() / CLOCKS_PER_SEC *3000 << " ms" << endl;
    return 0;
}