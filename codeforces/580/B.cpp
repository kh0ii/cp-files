#include "bits/stdc++.h"
using namespace std;
#define int long long
const int inf = 1e9+9, mod = 1e9+7;
int n, d;
pair<int, int> a[100005];
void solve(){
	cin >> n >> d;
    for(int i=0; i<n; i++)
        cin >> a[i].first >> a[i].second;
    sort(a, a+n);
    int L = 0, R = 0, cnt = 0, mx = 0;
    while(R < n){
        cnt += a[R].second;
        ++R;
        if(a[R].first - a[L].first >= d){
            mx = max(mx, cnt);
            while(a[R].first - a[L].first >= d){
                cnt -= a[L].second;
                ++L;
            }
        }
        //cout << L << ' ' << R << '\n';
    }
    mx = max(mx, cnt);
    cout << mx;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    //cin >> t;
    while(t--)
    	solve();
    return 0;
}



