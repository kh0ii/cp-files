#include <bits/stdc++.h>
using namespace std;

#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FOR1(a, c) for (int(a) = 1; (a) <= (c); (a)++)
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
typedef long long int ll;
string alpha = "abcdefghijklmnopqrstuvwxyz";

int main()
{    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
	#ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("error.txt", "w", stderr);
    	freopen("output.txt", "w", stdout);
	#endif
	
	int t, j=1;
	cin>>t;
	char c[t];
	FOR(i, t){
		cin>>c[i];
		c[i] = tolower(c[i]);
	}
	char d[t];
	sort(c, c+t);
	d[0] = c[0];
	FOR1(i, t){
		if(c[i]==c[i-1]){
		}
		else{
			d[j] = c[i];
			j++;
		}
	}
	FOR(i, alpha.length()){
		if(d[i]!=alpha[i]){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
  
    cerr << "Time taken : " << (float)clock() / CLOCKS_PER_SEC *3000 << " ms" << endl;
    return 0;
}