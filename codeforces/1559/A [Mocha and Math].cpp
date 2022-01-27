#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
const double PI = 4 * atan(1);
int n;
void solve(){
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    int x = a[0];
    for(int i=1; i<n; i++) x = x&a[i];
    cout<<x<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--) solve();

    cout.flush();
    return 0;
}
