#include <iostream>
using namespace std;

int n, m, r[105], b[105];

void solve(){
    int s1 = 0, s2 = 0;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> r[i];
        r[i] += r[i-1];
        s1 = max(s1, r[i]);
    }
    cin >> m;
    for(int j = 1; j <= m; ++j){
        cin >> b[j];
        b[j] += b[j-1];
        s2 = max(s2, b[j]);
    }
    cout << max(0, s1 + s2) << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
