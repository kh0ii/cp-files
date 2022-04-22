#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, k;
    cin>>n>>k;
    pair<double, double> a[n];
    for(int i=0; i<n; i++)
    	cin>>a[i].first>>a[i].second;
    double len = 0;
    for(int i=1; i<n; i++){
    	len += sqrt((a[i].first - a[i-1].first) * (a[i].first - a[i-1].first) + (a[i].second - a[i-1].second) * (a[i].second - a[i-1].second));
    }
    cout<<fixed<<setprecision(9)<<(len/50.0)*k;
    return 0;
}