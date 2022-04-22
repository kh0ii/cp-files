#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;
int n, a[100005], ans[100005];
void solve(){
    set<int> st;
    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> a[i];
        ans[i] = 0;
        st.insert(i+1);
    }
    ans[0] = a[0];
    st.erase(ans[0]);
    for(int i=1; i<n; ++i){
        if(a[i] < a[i-1]){
            cout << -1 << '\n';
            return;
        }
        if(a[i] > a[i-1]){
            ans[i] = a[i];
            st.erase(ans[i]);
        }
    }
    int mx = 0;
    for(int i=0; i<n; ++i){
        if(ans[i] == 0){
            ans[i] = *st.begin();
            st.erase(st.begin());
        }
        mx = max(mx, ans[i]);
        if(mx != a[i]){
            cout << -1 << '\n';
            return;
        }
    }
    for(int i=0; i<n; ++i)
        cout << ans[i] << ' ';
    cout << '\n';
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while(t--)
    	solve();
    return 0;
}



