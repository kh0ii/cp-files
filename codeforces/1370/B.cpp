#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;
int n, a[2407];
void solve(){
    cin>>n;
    vector<int> e, o;
    for(int i=0; i<2*n; i++){
        cin>>a[i];
        if(a[i] % 2) o.push_back(i+1);
        else e.push_back(i+1);
    }
    if(o.size() % 2 == 0 and e.size() % 2 == 0){
        if(o.size() > e.size()){
            o.pop_back(); o.pop_back();
        }
        else{
            e.pop_back(); e.pop_back();
        }
    }
    else{
        o.pop_back(); e.pop_back();
    }
    for(int i=0; i<e.size(); i+=2) cout<<e[i]<<' '<<e[i+1]<<'\n';
    for(int i=0; i<o.size(); i+=2) cout<<o[i]<<' '<<o[i+1]<<'\n';
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}



