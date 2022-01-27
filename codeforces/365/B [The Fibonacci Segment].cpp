#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; cin>>n;
    int a[n], s[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(i>1){
            s[i] = (a[i] == a[i-1] + a[i-2]);
        }
    }
    int ans = - inf, cnt = 0;
    /*for(int i=0; i<n; i++) cout<<s[i]<<" ";
    cout<<endl;*/
    for(int i=2; i<n; i++){
        cnt = 0;
        while(s[i] and i<n){
            i++; cnt++;
        }
        ans = max(ans, cnt + 2);
    }
    if(cnt == 0) cnt = min(2, n);
    cout<<max(ans, cnt);
    return 0;
}



