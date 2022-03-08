/**
 *	author: kh0i
 *	created: 08.03.2022 14:33:07
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

void solve(){
    long long n;
    cin >> n;
    vector<long long> d(n), p;
    for(long long &i : d)
        cin >> i;
    sort(d.begin(), d.end());
    long long x = d.front() * d.back();
    for(long long i = 2; i * i <= x; ++i){
        if(x % i == 0){
            p.push_back(i);
            if(x / i != i)
                p.push_back(x / i);
        }
    }
    sort(p.begin(), p.end());
    cout << (equal(d.begin(), d.end(), p.begin()) ? x : -1) << '\n';
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(0);
    int test = 1;
    cin >> test;
    for(int i=1; i<=test; ++i){
        solve();
    }
    return 0;
}

// Write stuff down

