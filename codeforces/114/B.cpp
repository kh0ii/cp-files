#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, m; cin>>n>>m;
    map<pair<string, string>, bool> mp;
    string a[n], s, t;
    vector<string> ans, c;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<m; i++){
        cin>>s>>t;
        mp[make_pair(s, t)] = true;
        mp[make_pair(t, s)] = true;
    }
    bool flag;
    for(int mask = 0; mask < (1 << n); mask++){
        c.clear();
        flag = true;
        for(int i = 0; i < n; i++){
            if(mask & (1 << i))
                c.push_back(a[i]);
        }
        for(int i = 0; i < c.size(); i++){
            for(int j = i + 1; j < c.size(); j++){
                if(mp[make_pair(c[i], c[j])]){
                    flag = false;
                    break;
                }
            }
            if(!flag) break;
        }
        if(flag){
            if(ans.size() < c.size()) ans = c;
        }
    }
    sort(ans.begin(), ans.end());
    cout<<ans.size()<<'\n';
    for(string d: ans) cout<<d<<'\n';
    return 0;
}



