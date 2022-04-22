#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;
int x, y;
void solve(){
    cin>>x>>y;
    for(int i=0; i<=50; i++){
        for(int j=0; j<=50; j++){
            if(i+j == abs(x-i) + abs(y-j)){
                cout<<i<<' '<<j<<"\n";
                return;
            }
        }
    }
    cout<<-1<<' '<<-1<<'\n';
}
int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}