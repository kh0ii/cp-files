#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin>>s;
    int n = s.size();
    bool flag = true;
    for(int i=0; i<n; i++){
    	if(s[i]!='a'){
    		for(int j=i; j<n and s[j]!='a'; j++){
    			s[j] = char(s[j] - 1);
    			flag = false;
    		}
    		break;
    	}
    }
    if(flag){
    	if(s[n-1] == 'a')
    		s[n-1] = 'z';
    	else
    		s[n-1] = char(s[n-1] - 1);
    }
    cout<<s;
    return 0;
}