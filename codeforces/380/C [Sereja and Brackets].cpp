/**
 *	author: kh0i
 *	created: 24.02.2022 08:15:49
**/
#include "bits/stdc++.h"
using namespace std;

#define int long long  // MLE sometimes
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
int recur_depth = 0;
template<typename ...Args>
void logger(string vars, Args&&... values) {
    cerr << string(recur_depth, '\t') << "\033[36m[" <<  vars << "] = ";
    string delim = "";
    (..., (cerr << delim << values , delim = ", "));
    cerr << "\033[0;39m" << endl;
}

#ifdef LOCAL
#define debug(...) logger(#__VA_ARGS__, __VA_ARGS__)
#else
#define debug(...) 42
#endif

// use mt19937_64 for 64-bit
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int get_rand(int l, int r) {
    assert(l <= r);
    return uniform_int_distribution<int> (l, r)(rng);
}

const int N = 1e6 + 2;

struct Node{
    int optimal = 0;
    int open = 0;
    int close = 0;
};
Node tree[4 * N];

Node operator + (const Node& left, const Node& right){
    Node res;
    int tmp = min(left.open, right.close);
    res.optimal = left.optimal + right.optimal + tmp;
    res.open = left.open + right.open - tmp;
    res.close = left.close + right.close - tmp;
    return res;
}

string s;
int n, m, l, r;

void build(int node, int left, int right){
    if(left == right){
        Node res;
        if(s[left] == '(') res.open = 1;
        else res.close = 1;
        tree[node] = res;
    }
    else{
        int mid = (left + right) / 2;
        build(2 * node, left, mid);
        build(2 * node + 1, mid + 1,  right);
        tree[node] = tree[2 * node] + tree[2 * node + 1];
    }
}

Node query(int node, int left, int right, int query_left, int query_right){
    if(query_left <= left and right <= query_right)
        return tree[node];
    else if(query_right < left or right < query_left){
        Node empt;
        return empt;
    }
    else {
        int mid = (left + right) / 2;
        return query(2 * node, left, mid, query_left, query_right) +
               query(2 * node + 1, mid + 1, right, query_left, query_right);
    }
}

void solve(){
    cin >> s;
    n = s.size();
    s = ' ' + s;
    build(1, 1, n);
    cin >> m;
    while(m--){
        cin >> l >> r;
        cout << query(1, 1, n, l, r).optimal * 2 << '\n';
    }
}

// Give yourself ~30 minutes of being stuck before reading editorial
// Write stuff down

int32_t main() {
//    freopen(".inp", "r", stdin);
//    freopen(".out", "w", stdout);
    cin.tie(0)->sync_with_stdio(0);
    int test = 1;
//    cin >> test;
    for(int i=1; i<=test; ++i){
//        cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}


