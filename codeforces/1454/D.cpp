/**
 *	author: kh0i
 *	created: 11.04.2022 16:44:59
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

using ll = long long;

const int N = 1e5 + 2;
bool sieve[N];
vector<ll> p;

void pre(){
    sieve[0] = sieve[1] = 1;
    for(ll i = 2; i * i < N; ++i){
        if(!sieve[i]){
            for(ll j = i * i; j < N; j += i){
                sieve[j] = 1;
            }
        }
    }
    for(ll i = 1; i < N; ++i){
        if(!sieve[i]){
            p.push_back(i);
        }
    }
}

void solve(){
    ll n;
    cin >> n;
    map<ll, ll> mp;
    for(ll k : p){
        if(n <= 1) break;
        ll cnt = 0;
        while(n % k == 0){
            n /= k;
            ++cnt;
        }
        if(cnt){
            mp[k] = cnt;
        }
    }
    if(n > 1){
        mp[n] = 1;
    }
    debug(mp, n);
    if(mp.empty()){
        cout << 1 << '\n' << n << '\n';
    }
    else{
        ll mx = 0, base = 0, fin;
        for(auto k : mp){
            if(mx < k.second){
                base = k.first;
                mx = k.second;
            }
        }
        fin = base;
        cout << mx << '\n';
        for(ll i = 1; i < mx; ++i){
            cout << base << ' ';
        }
        for(auto k : mp){
            if(k.first != base){
                for(ll i = 0; i < k.second; ++i){
                    fin *= k.first;
                }
            }
        }
        cout << fin << '\n';
    }
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(0);
    pre();
    debug(p.size());
    int test = 1;
    cin >> test;
    for(int i = 1; i <= test; ++i){
        solve();
    }
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}

// Write stuff down

