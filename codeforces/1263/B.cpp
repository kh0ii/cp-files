/**
 *	author: kh0i
 *	created: 11.03.2022 19:33:16
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

void solve(){
    string s;
    int n, cur = 0, cnt = 0;
    cin >> n;

    map<string, int> mp;
    vector<vector<pair<string, int>>> v;
    vector<string> ans(n + 1);
    
    for(int i = 1; i <= n; ++i){
        cin >> s;
        if(mp.count(s)){
            v[mp[s]].push_back(make_pair(s, i));
        }
        else{
            vector<pair<string, int>> k = {make_pair(s, i)};
            v.push_back(k);
            mp[s] = cur++;
        }
    }

    for(int i = 0; i < v.size(); ++i){
        for(int j = 0; j < v[i].size(); ++j){
            if(j == 0){
                ans[v[i][j].second] = v[i][j].first;
            } else{
                string f = v[i][j].first;
                for(int k = 0; k <= 9; ++k){
                    f.pop_back();
                    f.push_back(char(k + '0'));
                    if(mp.count(f)) continue;
                    ++cnt;
                    mp[f] = 1;
                    ans[v[i][j].second] = f;
                    break;
                }
            }
        }
    }

    debug(v, ans, mp, cnt);
    cout << cnt << '\n';
    for(int i = 1; i <= n; ++i)
        cout << ans[i] << '\n';
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(0);
    int test = 1;
    cin >> test;    
    for(int i = 1; i <= test; ++i){
        solve();
    }
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}

// Write stuff down

