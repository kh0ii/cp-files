#include "bits/stdc++.h"
using namespace std;

#define F first
#define S second
#define sz(x) int((x).size())
using ll = long long; 

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
ll get_rand(ll l, ll r) {
    assert(l <= r);
    return uniform_int_distribution<ll> (l, r)(rng);
}

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

struct Trie{
    const int static LG = 18;
    struct Node{
        Node *child[2];
        int cnt, exist;
        ll sum;
        Node(){
            child[0] = child[1] = NULL;
            cnt = sum = 0;
        }
    };

    Node *root;

    Trie(){
        root = new Node();
    }

    void add(int x){
        Node *p = root;
        for(int i = LG; i >= 0; --i){
            int c = !!(x & (1 << i));
            if(p->child[c] == NULL)
                p->child[c] = new Node();
            p = p->child[c];
            ++p->cnt;
            p->sum += x;
        }
    }

    bool find_number(int x){
        Node *p = root;
        for(int i = LG; i >= 0; --i){
            int c = !!(x & (1 << i));
            if(p->child[c] == NULL)
                return 0;
            p = p->child[c];
        }
        return 1;
    }

    void del(int x){
        if(!find_number(x))
            return;
        Node *p = root;
        for(int i = LG; i >= 0; --i){
            int c = !!(x & (1 << i));
            if(p->child[c] == NULL)
                return;
            p = p->child[c];
            --p->cnt;
            p->sum -= x;
        }
        return p->cnt;
    }

    int find_kth(int x, int k){
        Node *p = root;
        int ans = 0;
        for(int i = LG; i >= 0; --i){
            int c = !!(x & (1 << i));
            if(p->child[c] != NULL and p->child[c]->cnt >= k)
                p = p->child[c];
            else if(p->child[c ^ 1] != NULL){
                if(p->child[c] != NULL)
                    k -= p->child[c]->cnt;
                p = p->child[c ^ 1];
                ans |= (1 << i);
            }
        }
     
       return ans;
    }

    int cnt(int mx){
        if(mx < 0)
            return 0;
        Node *p = root;
        int ans = 0;
        for(int i = LG; i >= 0 and p != NULL; --i){
            int c = !!(mx & (1ll << i));
            if(c){
                if(p->child[0] != NULL)
                    ans += p->child[0]->cnt; 
            }
            p = p->child[c];
        }
        if(p != NULL)
            ans += p->cnt;
        return ans;
    }

    ll get_sum(ll mx){
        Node *p = root;
        ll ans = 0;
        if(mx < 0)
            return 0; 
        for(int i = LG; i >= 0 and p != NULL; --i){
            int c = !!(mx & (1ll << i));
            if(c){
                if(p->child[0] != NULL)
                    ans += p->child[0]->sum; 
            }
            p = p->child[c];
        }
        if(p != NULL)
            ans += p->sum;
        return ans;
    }
} dak;

void solve(){
    dak.add(1);
    dak.add(2);
    dak.add(3);
    debug(dak.get_sum(2));
    dak.del(1);
    debug(dak.get_sum(2));
}


int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(0);
    int test = 1;
//    cin >> test;
    for(int i = 1; i <= test; ++i){
//        cout << "Case #" << i << ": ";
        solve();
    }
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
