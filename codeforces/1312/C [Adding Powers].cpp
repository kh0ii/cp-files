/**
 *	author: kh0i
 *	created: 08.03.2022 15:05:51
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

#define ll long long

void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    priority_queue<ll> pq;
    for(ll &i : a){
        cin >> i;
        if(i)
            pq.push(i);
    }
    ll s = 1;
    while(!pq.empty() and s * k <= pq.top())
        s *= k;
    while(!pq.empty()){
//        debug(pq.top(), s);
        if(pq.top() < s){
            s = s / k;
            continue;
        }
        ll f = pq.top() - s;
        pq.pop();
        if(!pq.empty() and pq.top() >= s){
            cout << "NO\n";
            return;
        }
        if(f)
            pq.push(f);
        if(s == 1) break;
        s /= k;
    }
    cout << (pq.empty() ? "YES\n" : "NO\n");
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

