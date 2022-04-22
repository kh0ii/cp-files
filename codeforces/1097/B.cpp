#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int mask = 0; mask < (1 << n); mask++){
        int S = 0;
        for(int i=0; i<n; i++){
            if(mask & (1 << i)) S += a[i];
            else S -= a[i];
        }
        if(S%360 == 0){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}



