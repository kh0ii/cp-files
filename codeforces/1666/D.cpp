#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
#define forr(i,l,r) for(int i=l; i<=r; i++)
#define cebug(x) cerr << "[" << #x << "] = " << x << endl
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen(".inp", "r", stdin);
    //freopen(".out", "w", stdout);
    int t; cin>>t; while(t--){
    	string s,d;
    	cin>>s>>d;
    	map <char,int> mp,gp;
    	for(int i=0; i<d.size(); i++) gp[d[i]]++;
    	for(int i=0; i<s.size(); i++){
    		mp[s[i]]++;
    		if(gp.find(s[i])==gp.end()) gp[s[i]]=0;
    	}
    	for(int i=0; i<s.size(); i++){
    		if(mp[s[i]]>gp[s[i]]){
    			mp[s[i]]--;
    			s[i]='.';
    		}
    	}
    	string k;
    	for(int i=0; i<s.size(); i++){
    		if(s[i]!='.') k.push_back(s[i]);
    	}
    	if(k==d) cout<<"YES"<<endl;
    	else cout<<"NO"<<endl;
    }
    //cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
}