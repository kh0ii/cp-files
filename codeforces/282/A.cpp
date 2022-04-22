#include <bits/stdc++.h>
using namespace std;

#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
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
  
    int t, x=0;
    cin>>t;
    while(t--){
    	string s;
    	cin>>s;
    	FOR(i, s.length()){
    		if(s[i]=='+'){
    			x++;
    			break;
    		}
    		else if(s[i]=='-'){
    			x--;
    			break;
    		}
    	}
    }
  	cout<<x;
    cerr << "Time taken : " << (float)clock() / CLOCKS_PER_SEC *3000 << " ms" << endl;
    return 0;
}