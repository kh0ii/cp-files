#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    string s, t; cin>>s>>t;
    int cnt = 0, fin = 0;
    for(int i=0; i<t.size(); i++){
        cnt += (t[i] == '?');
        fin += (s[i] == '+' ? 1 : -1);
    }
    int su = 0, tot = 0;
    for(int mask = 0; mask < (1 << cnt); mask++){
        int pos = 0, curr = 0;
        for(int i=0; i<t.size(); i++){
            if(t[i] == '?'){
                if(mask & (1<<curr)) pos++;
                else pos--;
                curr++;
            }
            else{
                pos += (t[i] == '+' ? 1 : -1);
            }
        }
        su += (pos == fin);
        tot++;
    }
    cout<<fixed<<setprecision(12)<<double(su)/double(tot);
    return 0;
}



