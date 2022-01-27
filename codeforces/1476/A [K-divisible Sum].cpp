#include "bits/stdc++.h"
// #pragma GCC optimize("Ofast,unroll-loops")
// #pragma GCC target("avx2,tune=native")
using namespace std;

#define int long long  // MLE sometimes
#define sz(x) ((int)(x).size())
#define all(a) (a).begin(), (a).end()
inline int gcd(int a, int b) { int r; while (b) {r = a % b; a = b; b = r;} return a; }
inline int lcm(int a, int b) { return a / gcd(a, b) * b; }

// https://quangloc99.github.io/2021/07/30/my-CP-debugging-template.html
#define print_op(...) ostream& operator<<(ostream& out, const __VA_ARGS__& u)

// for printing std::pair
template<class U, class V> print_op(pair<U, V>) {
    return out << "(" << u.first << ", " << u.second << ")";
}
// for printing collection
template<class Con, class = decltype(begin(declval<Con>()))>
typename enable_if<!is_same<Con, string>::value, ostream&>::type
operator<<(ostream& out, const Con& con) {
    out << "{";
    for (auto beg = con.begin(), it = beg; it != con.end(); ++it)
        out << (it == beg ? "" : ", ") << *it;
    return out << "}";
}
// for printing std::tuple
template<size_t i, class T> ostream& print_tuple_utils(ostream& out, const T& tup) {
    if constexpr(i == tuple_size<T>::value) return out << ")";
    else return print_tuple_utils<i + 1, T>(out << (i ? ", " : "(") << get<i>(tup), tup);
}
template<class ...U> print_op(tuple<U...>) {
    return print_tuple_utils<0, tuple<U...>>(out, u);
}

// https://codeforces.com/blog/entry/91347
#define debug(...) logger(#__VA_ARGS__, __VA_ARGS__)
template<typename ...Args>
void logger(string vars, Args&&... values) {
    cerr << "\033[36m[" <<  vars << "] = ";
    string delim = "";
    (..., (cerr << delim << values , delim = ", "));
    cerr << "\033[39m" << endl;
}

// use mt19937_64 for 64-bit
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int get_rand(int l, int r) {
    assert(l <= r);
    return uniform_int_distribution<int> (l, r)(rng);
}

bool prime(int chim){
    if(chim <= 1) return 0;
    if(chim == 2 or chim == 3) return 1;
    if(chim % 2 == 0 or chim % 3 == 0) return 0;
    for(int i = 5; i * i <= chim; i += 6) {
        if(chim % i == 0 or chim % (i + 2) == 0) return 0;
    }
    return 1;
}

int power(int a, int b, int m = 0){
    int x = 1;
    while (b) {
        if (b & 1) x = x * a;
        a = a * a;
        b >>= 1;
        if(m)
            x = x % m, a = a % m;
    }
    return x;
}

int n, k;

bool check(int d){
    if(d * n >= k) return 1;
    else return 0;
}

void solve(){
    cin >> n >> k;
    if(k < n){
        k = (n + k - 1) / k * k;
        debug(k);
    }
    int d = (k + n - 1) / n;
    cout << d << '\n';
}

// Give yourself ~30 minutes of being stuck before reading editorial
// Write stuff down

int32_t main() {
//    freopen(".inp", "r", stdin);
//    freopen(".out", "w", stdout);
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int test = 1;
    cin >> test;
    for(int i=1; i<=test; ++i){
//        cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}


