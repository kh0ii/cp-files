#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;
int n, a[104];

void solve(){
    cin>>n;
    for(int i=1; i<=n; i+=2){
        if(i+1 > n) break;
        a[i] = i+1;
        a[i+1] = i;
    }
    if(n%2 == 1){
        a[n] = n;
        swap(a[n], a[n-2]);
    }
    for(int i=1; i<=n; i++)
        cout<<a[i]<<' ';
    cout<<'\n';
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}