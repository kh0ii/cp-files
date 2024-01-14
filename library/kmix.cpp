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

const long double PI = acos(-1);

struct Vector{
    using type = long double;

    type x, y;
    Vector operator - (const Vector& other) const {
        return {x - other.x, y - other.y};
    }
    type operator * (const Vector& other) const {
        return x * other.y - other.x * y;
    }
    type operator % (const Vector& other) const {
        return x * other.x + y * other.y;
    }
    bool operator == (const Vector &other) const{
        return x == other.x and y == other.y;
    }
    bool operator != (const Vector &other) const{
        return !(*this == other);
    }
    friend type cross(const Vector &A, const Vector &B, const Vector &C){
        return (B - A) * (C - A);
    }
    friend type dist(Vector A){
        return A.x * A.x + A.y * A.y;
    }
    friend type dot(const Vector &A, const Vector &B, const Vector &C){
        Vector u = (B - A), v = (C - A);
        return u % v;
    }
    friend istream& operator >> (istream& is, Vector& V){
        is >> V.x >> V.y;
        return is;
    }
    friend ostream& operator << (ostream& os, Vector& V){
        os << V.x << ' ' << V.y;
        return os;
    }
    friend double angle(const Vector &A, const Vector &B, const Vector &C){
        double x = dot(B, A, C) / sqrt(dist(A - B) * dist(C - B));
        return acos(min(1.0, max(-1.0, x))) * 180.0 / PI;
    }
};
using Point = Vector;
const Point origin = {0, 0};

long double area(Point A, Point B, Point C){
    long double res = cross(origin, A, B) + cross(origin, B, C) + cross(origin, C, A);
    return abs(res) / 2.0;
}

vector<Point> convex_hull(vector<Point> p, int n) {
    sort(p.begin(), p.end(), [](const Point &A, const Point &B) {
        if (A.x != B.x) return A.x < B.x;
        return A.y < B.y;
    });

    vector<Point> hull;
    hull.push_back(p[0]);

    for (int i = 1; i < n; ++i) {
        while (hull.size() >= 2 && cross(hull[hull.size() - 2], hull.back(), p[i]) > 0) {
            hull.pop_back();
        }
        hull.push_back(p[i]);
    }

    for (int i = n - 2; i >= 0; --i) {
        while (hull.size() >= 2 && cross(hull[hull.size() - 2], hull.back(), p[i]) > 0) {
            hull.pop_back();
        }
        hull.push_back(p[i]);
    }

    if (n > 1) hull.pop_back();

    return hull;
}

bool check(vector<Point> &hull, Point &a){
    int n = sz(hull);
    if(n == 1)
        return hull[0] == a;
    if(n == 2)
        return cross(hull[0], hull[1], a) == 0 and dot(a, hull[0], hull[1]) <= 0;

    if(cross(hull[0], hull[1], a) > 0)
        return 0;
    if(cross(hull[n - 1], hull[0], a) >= 0)
        return cross(hull[n - 1], hull[0], a) == 0 and dot(a, hull[n - 1], hull[0]) <= 0;
    int l = 1, r = n - 1, ans = -1;
    while(l <= r){
        int mid = (l + r) / 2;
        if(cross(hull[0], hull[mid], a) > 0){
            ans = mid;
            r = mid = 1;
        }
        else
            l = mid + 1;
    }
    return cross(hull[ans - 1], hull[ans], a) <= 0;
}

int n, m;

void solve(){
    cin >> n;
    vector<Point> a(n);
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    vector<Point> hull = convex_hull(a, n);
    cin >> m;
    while(m--){
        Point b;
        cin >> b;
        cout << (check(hull, b) ? "YES\n" : "NO\n");
    }   
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