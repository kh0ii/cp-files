#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;
struct Point{
    int x, y;
} a[1005], base;

int n, ck[1005], cnt = 0;

bool check(Point a, Point b, Point c){
    return (a.y - b.y) * (a.x - c.x) == (a.y - c.y) * (a.x - b.x);
}

void solve(){
    cin >> n;
    cin >> base.x >> base.y;
    for(int i=0; i<n; i++)
        cin >> a[i].x >> a[i].y;
    for(int i=0; i<n; i++){
        if(!ck[i]){
            for(int j=i+1; j<n; j++){
                if(check(a[i], a[j], base))
                    ck[j] = 1;
            }
            ++cnt;
        }
    }
    cout << cnt;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    //cin >> t;
    while(t--)
    	solve();
    return 0;
}



