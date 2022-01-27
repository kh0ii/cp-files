#include <bits/stdc++.h>
using namespace std;

#define FOR(a, c) for (int(a) = 1; (a) <= (c); (a)++)
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
	#ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("error.txt", "w", stderr);
    	freopen("output.txt", "w", stdout);
	#endif
  
    int k, n, w;
    cin>>k>>n>>w;
    FOR(i, w){
    	n -= i*k;
    }
    if(n>=0) cout<<0;
    else cout<<abs(n);
  
    cerr << "Time taken : " << (float)clock() / CLOCKS_PER_SEC *3000 << " ms" << endl;
    return 0;
}