#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define fi first
#define se second
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()

const ld EPS = 1e-9;
const ld PI = acos(-1);

// PI = 180 deg
ld DEG_to_RAD(ld d) { return d * PI / 180.0; }
ld RAD_to_DEG(ld r) { return r * 180.0 / PI; }

inline int cmp(ld a, ld b) {
    return (a < b - EPS) ? -1 : ((a > b + EPS) ? 1 : 0);
}

bool same(const ld& a, const ld& b) { return abs(a - b) <= EPS; }
int sign(ld x) {
    if (x < 0) return -1;
    if (x > 0) return +1;
    return 0;
}

struct Point {
    ld x, y;
    Point() { x = y = 0; }
    Point(ld _x, ld _y) { x = _x, y = _y; }
    bool operator < (const Point& b) { return x < b.x || (same(x, b.x) && y < b.y); }
    bool operator > (const Point& b) { return x > b.x || (same(x, b.x) && y > b.y); }
    bool operator == (const Point& b) { return same(x, b.x) && same(y, b.y); }
    Point operator - (const Point& b) { return Point(x - b.x, y - b.y); }
    Point operator + (const Point& b) { return Point(x + b.x, y + b.y); }
    Point operator * (ld scale) { return Point(x * scale, y * scale); }
    Point operator / (ld scale) { return Point(x / scale, y / scale); }
    ld operator * (const Point& a) const { return x * a.x + y * a.y; } // dot product
    ld operator % (const Point& a) const { return x * a.y - y * a.x; } // cross product
    Point rotate(ld angle) { return Point(x * cos(angle) - y * sin(angle), x * sin(angle) + y * cos(angle)); }
    Point conj() { return Point(x, -y); }
    Point perp() { return Point(-y, x); } // perpendicular -> rotates +90 degrees
    ld norm() { return x * x + y * y; } // (squared length)
    ld arg() { return atan2(y, x); } // angle to x-axis in interval [-PI, PI]
    ld len() { return hypotl(x, y); }
    ld dot(const Point& b) { return x * b.x + y * b.y; }
    ld cross(const Point& b) { return x * b.y - y * b.x; }
};

Point operator - (const Point& a, const Point& b) { return Point(a.x - b.x, a.y - b.y); }
ld dot(const Point& a, const Point& b) { return a.x * b.x + a.y * b.y; }
ld cross(const Point& a, const Point& b) { return a.x * b.y - a.y * b.x; }
int ccw(const Point& a, const Point& b, const Point& c) { return sign(cross(b - a, c - a)); }

istream& operator >> (istream& cin, Point& p) {
    cin >> p.x >> p.y;
    return cin;
}

ostream& operator << (ostream& cout, const Point& p) {
    cout << p.x << ' ' << p.y;
    return cout;
}

struct Line {
    ld a, b, c;
    Point A, B;
    Line() {}
    Line(ld _a, ld _b, ld _c) { a = _a, b = _b, c = _c; }
    Line(Point _A, Point _B) {
        A = _A, B = _B;
        a = B.y - A.y;
        b = A.x - B.x;
        c = cross(A, B);
    }
};

bool onSegment(const Point& a, const Point& b, const Point& p) {
    return ccw(a, b, p) == 0
        && min(a.x, b.x) <= p.x && p.x <= max(a.x, b.x)
        && min(a.y, b.y) <= p.y && p.y <= max(a.y, b.y);
}

bool areParallel(Line l1, Line l2) {
    return cmp(l1.a * l2.b, l1.b * l2.a) == 0;
}
 
bool areSame(Line l1, Line l2) {
    return areParallel(l1 ,l2) && cmp(l1.c * l2.a, l2.c * l1.a) == 0
                && cmp(l1.c * l2.b, l1.b * l2.c) == 0;
}

Point lineline(Line l1, Line l2) {
    ld det = l1.a * l2.b - l2.a * l1.b;
    if (same(det, 0)) throw("parallel or coincident");
    return Point((l2.b * l1.c - l1.b * l2.c) / det, (l1.a * l2.c - l2.a * l1.c) / det);
}

bool segseg(Point a, Point b, Point c, Point d) {
    int abac = sign(cross(b - a, c - a));
    int abad = sign(cross(b - a, d - a));
    int cdca = sign(cross(d - c, a - c));
    int cdcb = sign(cross(d - c, b - c));
    if (abac == 0 || abad == 0 || cdca == 0 || cdcb == 0) {
        if (abac == 0 && dot(a - c, b - c) <= 0) return true;
        if (abad == 0 && dot(a - d, b - d) <= 0) return true;
        if (cdca == 0 && dot(c - a, d - a) <= 0) return true;
        if (cdcb == 0 && dot(c - b, d - b) <= 0) return true;
        return false;
    }
    return (abac * abad < 0 && cdca * cdcb < 0);
}

void convexhull(vector<Point>& a) {
    if (sz(a) == 1) return;
    sort(all(a));
    a.resize(unique(all(a)) - a.begin());
    Point p1 = a[0], p2 = a.back();
    vector<Point> up, dn;
    up.push_back(p1), dn.push_back(p1);
    for (int i = 1; i < sz(a); i++) {
        if (i == sz(a) - 1 || ccw(p1, a[i], p2) > 0) {
            while (sz(up) >= 2 && !(ccw(up[sz(up) - 2], up[sz(up) - 1], a[i]) > 0)) up.pop_back();
            up.push_back(a[i]);
        }

        if (i == sz(a) - 1 || ccw(p1, a[i], p2) < 0) {
            while (sz(dn) >= 2 && !(ccw(dn[sz(dn) - 2], dn[sz(dn) - 1], a[i]) < 0)) dn.pop_back();
            dn.push_back(a[i]);
        }
    }
    a.clear();
    for (int i = 0; i < sz(up); i++) a.push_back(up[i]);
    for (int i = sz(dn) - 2; i > 0; i--) a.push_back(dn[i]);
}

// 2 times, signed
ld area(const Point& a, const Point& b, const Point& c) {
    return cross(b - a, c - a); 
}

// 2 times, signed
ld area(vector<Point>& a) {
    ld ans = 0;
    int n = sz(a);
    for (int i = 0; i < n; i++) {
        ans += a[i].x * a[(i + 1) % n].y - a[i].y * a[(i + 1) % n].x;
    }
    return ans;
}

// Distance from p to Line ab (closest Point will be stored in c)
ld distToLine(Point p, Point a, Point b, Point &c) {
    Point ap = p - a, ab = b - a;
    ld u = (ap * ab) / ab.norm();
    c = a + (ab * u);
    return (p - c).len();
}
 
// Distance from p to Line ab
// if remove "abs":
// Positive value on left side and negative on right as seen from a towards b.
// a==b gives nan
ld distToLine(Point p, Point a, Point b) {
    return abs((b - a) % (p - a)) / (b - a).len();
}

// Distance from p to segment ab (closest Point will be stored in c)
ld distToLineSegment(Point p, Point a, Point b, Point &c) {
    Point ap = p - a, ab = b - a;
    ld u = (ap * ab) / ab.norm();
    if (u < 0.0) {
        c = Point(a.x, a.y);
        return (p - a).len();
    }
    if (u > 1.0) {
        c = Point(b.x, b.y);
        return (p - b).len();
    }
    return distToLine(p, a, b, c);
}

bool areIntersect(Line l1, Line l2, Point &p) {
    if (areParallel(l1, l2)) return false;
    ld dx = l1.b * l2.c - l2.b * l1.c;
    ld dy = l1.c * l2.a - l2.c * l1.a;
    ld d  = l1.a * l2.b - l2.a * l1.b;
    p = Point(dx / d, dy / d);
    return true;
}

// closest point from p in line l.
void closestPoint(Line l, Point p, Point &ans) {
    if (fabs(l.b) < EPS) {
        ans.x = -(l.c) / l.a; ans.y = p.y;
        return;
    }
    if (fabs(l.a) < EPS) {
        ans.x = p.x; ans.y = -(l.c) / l.b;
        return;
    }
    Line perp(l.b, -l.a, - (l.b * p.x - l.a * p.y));
    areIntersect(l, perp, ans);
}

void reflectionPoint(Line l, Point p, Point &ans) {
    Point b;
    closestPoint(l, p, b);
    ans = p + (b - p) * 2;
}

ld maxtriangle(vector<Point>& a) {
    convexhull(a);
        
    ld ans = 0;
    int sz = a.size();
    
    for (int i = 0; i < sz; i++) {
        int l = i + 1;
        for (int r = i + 2; r < sz; r++) {
            while (l + 1 < sz && abs(area(a[i], a[r], a[l + 1])) > abs(area(a[i], a[r], a[l]))) l++;
            ans = max(ans, abs(area(a[i], a[r], a[l])));
        }
    }
    
    return ans / 2; 
}

typedef vector< Point > Polygon;
pair<ld, pair<int,int>> convex_diameter(const Polygon &p) {
    const int n = p.size();
    int is = 0, js = 0;
    for (int i = 1; i < n; ++i) {
        if (p[i].y > p[is].y) is = i;
        if (p[i].y < p[js].y) js = i;
    }
    ld maxd = (p[is]-p[js]).len();
    int i, maxi, j, maxj;
    i = maxi = is;
    j = maxj = js;
    do {
        int ii = (i+1) % n, jj = (j+1) % n;
        if ((p[ii] - p[i]) % (p[jj] - p[j]) >= 0) j = jj;
        else i = ii;
        if ((p[i] - p[j]).len() > maxd) {
            maxd = (p[i] - p[j]).len();
            maxi = i;
            maxj = j;
        }
    } while (i != is || j != js);
    return {maxd, std::minmax(maxi, maxj)}; /* farthest pair is (maxi, maxj). */
}

// Pick theorem
// Given non-intersecting polygon.
// S = area
// I = number of integer points strictly Inside
// B = number of points on sides of polygon
// S = I + B/2 - 1

// Cut a polygon with a line. Returns half on left-hand-side.
// To return the other half, reverse the direction of Line l (by negating l.a, l.b)
// The line must be formed using 2 points
Polygon polygon_cut(const Polygon& P, Line l) {
    Polygon Q;
    for(int i = 0; i < (int) P.size(); ++i) {
        Point A = P[i], B = (i == ((int) P.size())-1) ? P[0] : P[i+1];
        if (ccw(l.A, l.B, A) != -1) Q.push_back(A);
        if (ccw(l.A, l.B, A)*ccw(l.A, l.B, B) < 0) {
            Point p; areIntersect(Line(A, B), l, p);
            Q.push_back(p);
        }
    }
    return Q;
}

enum PolygonLocation { OUT, ON, IN };
PolygonLocation in_polygon(const Polygon &p, Point q) {
    if ((int)p.size() == 0) return PolygonLocation::OUT;

    // Check if point is on edge.
    int n = p.size();
    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n;
        Point u = p[i], v = p[j];

        if (u > v) swap(u, v);
        if (ccw(u, v, q) == 0 && onSegment(q, u, v)) return PolygonLocation::ON;
    }

    // Check if point is strictly inside.
    int c = 0;
    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n;
        if (((p[i].y <= q.y && q.y < p[j].y)
                    || (p[j].y <= q.y && q.y < p[i].y))
                && q.x < p[i].x + (p[j].x - p[i].x) * (q.y - p[i].y) / (double) (p[j].y - p[i].y)) {
            c = !c;
        }
    }
    return c ? PolygonLocation::IN : PolygonLocation::OUT;
}

// Check point in convex polygon, O(logN)
#define Det(a,b,c) ((double)(b.x-a.x)*(double)(c.y-a.y)-(double)(b.y-a.y)*(c.x-a.x))
PolygonLocation in_convex(vector<Point>& l, Point p){
    if (l.empty()) return PolygonLocation::OUT;
    if (l.size() <= 2) {
        return onSegment(l[0], l[1 % l.size()], p) ? PolygonLocation::ON : PolygonLocation::OUT;
    }

    int a = 1, b = l.size()-1, c;
    if (Det(l[0], l[a], l[b]) > 0) swap(a,b);

    if (onSegment(l[0], l[a], p)) return ON;
    if (onSegment(l[0], l[b], p)) return ON;

    if (Det(l[0], l[a], p) > 0 || Det(l[0], l[b], p) < 0) return OUT;
    while(abs(a-b) > 1) {
        c = (a+b)/2;
        if (Det(l[0], l[c], p) > 0) b = c; else a = c;
    }
    int t = cmp(Det(l[a], l[b], p), 0);
    return (t == 0) ? ON : (t < 0) ? IN : OUT;
}

bool cmpy(Point a, Point b) {
    return a.y < b.y || (a.y == b.y && a.x < b.x);
}
// Returns: {dist, 2 points}
//
// If need point ids -> add ID to struct P
// If need exact square dist -> can compute from returned points
pair<ld, pair<Point, Point>> closest_pair(vector<Point> a) {
    int n = a.size();
    assert(n >= 2);
    ld mindist = 1e20;
    pair<Point, Point> best_pair;
    vector<Point> t(n);
    sort(a.begin(), a.end());

    auto upd_ans = [&] (const Point& u, const Point& v) {
        ld cur = (u - v).len();
        if (cur < mindist) {
            mindist = cur;
            best_pair = {u, v};
        }
    };

    function<void(int,int)> rec = [&] (int l, int r) {
        if (r - l <= 3) {
            for (int i = l; i < r; ++i) {
                for (int j = i + 1; j < r; ++j) {
                    upd_ans(a[i], a[j]);
                }
            }
            sort(a.begin() + l, a.begin() + r, cmpy);
            return;
        }

        int m = (l + r) >> 1;
        ld midx = a[m].x;
        rec(l, m);
        rec(m, r);

        merge(a.begin() + l, a.begin() + m, a.begin() + m, a.begin() + r, t.begin(), cmpy);
        copy(t.begin(), t.begin() + r - l, a.begin() + l);

        int tsz = 0;
        for (int i = l; i < r; ++i) {
            if (abs(a[i].x - midx) < mindist) {
                for (int j = tsz - 1; j >= 0 && a[i].y - t[j].y < mindist; --j)
                    upd_ans(a[i], t[j]);
                t[tsz++] = a[i];
            }
        }
    };
    rec(0, n);

    return {mindist, best_pair};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
}
