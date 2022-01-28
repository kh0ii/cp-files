#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int mod = 1000000007; //998244353;

int n;
string a[50004];

bool cmp(string f, string s){
    f = f + s;
    s = s + f;
    for(int i = 0; i < f.size(); ++i){
        if(f[i] < s[i]) return 1;
        else if(f[i] > s[i]) return 0; 
    }
    return f.size() > s.size();
}

void solve(){
    cin >> n;
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a, a+n, cmp);
    for(int i = 0; i < n; ++i)
        cout << a[i];
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int test = 1;
//    cin >> test;
    for(int i=1; i<=test; ++i){
//        cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}
// Give yourself ~30 minutes of being stuck before reading editorial
// Write stuff down

