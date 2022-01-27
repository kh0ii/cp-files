#include <bits/stdc++.h>
using namespace std;

#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FOR1(a, c) for (int(a) = 1; (a) <= (c); (a)++)
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
typedef long long int ll;

ll s, n=0;
void solve(){
	cin>>s;

	n+=s/100;
	s-=(s/100)*100;

	n+=s/20;
	s-=(s/20)*20;

	n+=s/10;
	s-=(s/10)*10;

	n+=s/5;
	s-=(s/5)*5;

	n+=s;
	s-=s;
	cout<<n;
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
	
    solve();
  
    cerr << "Time taken : " << (float)clock() / CLOCKS_PER_SEC *3000 << " ms" << endl;
    return 0;
}