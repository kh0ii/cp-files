#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;
int n, m, a[100005], b[100005];
int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>m;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<m; i++)
        cin>>b[i];
    sort(a, a+n);
    sort(b, b+m);
    int l = 0, ans = -inf;
    for(int i=0; i<n; i++){
        int cur = 0;
        while(l < m-1){
            cur = abs(b[l] - a[i]);
            if(abs(b[l+1] - a[i]) <= cur)
                l++;
            else break;
        }
        ans = max(ans, abs(b[l] - a[i]));
    }
    cout<<ans;
    return 0;
}
