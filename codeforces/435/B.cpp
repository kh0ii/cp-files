/**
 *	author: kh0i
 *	created: 12.04.2022 23:43:32
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

using ll = long long;

void solve(){
    string n;
    int k;
    cin >> n;
    cin >> k;
    for(int i = 0; i < n.size() and k > 0; ++i){
        char mx = n[i];
        int p = i;
        for(int j = i + 1; j < n.size() and j - i <= k; ++j){
            if(n[j] > mx){
                mx = n[j];
                p = j;
            }
        }
        for(int j = p; j > i; --j){
            swap(n[j], n[j - 1]); 
        }
        k -= p - i;
    }
    cout << n;
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(0);
    int test = 1;
//    cin >> test;
    for(int i = 1; i <= test; ++i){
        solve();
    }
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
