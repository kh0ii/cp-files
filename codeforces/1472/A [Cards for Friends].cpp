#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t, w, h, n, cnt;
    cin>>t;
    while(t--){
        cnt = 1;
        cin>>w>>h>>n;
            while(w%2 == 0){
                w/=2;
                cnt = cnt * 2;
            }
            while(h%2 == 0){
                h/=2;
                cnt = cnt * 2;
            }
        cout<<(cnt >= n ? "YES\n" : "NO\n");
    }
}