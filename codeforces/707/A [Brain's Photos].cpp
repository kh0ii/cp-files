#include <bits/stdc++.h>
using namespace std;

#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FOR1(a, c) for (int(a) = 1; (a) <= (c); (a)++)
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
	
	int n, m;
	cin>>n>>m;
	char c[n][m];
	FOR(i, n)
		FOR(j, m) cin>>c[i][j];
	FOR(i, n){
		FOR(j, m){
			if(c[i][j]=='C'||c[i][j]=='M'||c[i][j]=='Y'||c[i][j]=='K'){
				cout<<"#Color";
				return 0;
			}
		}
	}
	cout<<"#Black&White";
  
    cerr << "Time taken : " << (float)clock() / CLOCKS_PER_SEC *3000 << " ms" << endl;
    return 0;
}