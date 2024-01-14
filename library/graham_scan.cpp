const double PI = acos(-1);

struct Vector{
    using type = double;

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
    double res = cross(origin, A, B) + cross(origin, B, C) + cross(origin, C, A);
    return abs(res) / 2.0;
}

vector<Point> convex_hull(vector<Point> p, int n){
    for(int i = 1; i < n; ++i)
        if(p[0].y > p[i].y or (p[0].y == p[i].y and p[0].x > p[i].x))
            swap(p[0], p[i]);

    sort(p.begin() + 1, p.end(), [&p](const Point &A, const Point &B){
            int c = cross(p[0], A, B);
            if(c > 0) return true;
            if(c < 0) return false;
            return dist(A - p[0]) < dist(B - p[0]);
            });

    // include collinear 
    int i = p.size() - 1;
    while(i >= 0 and cross(p[0], p[i], p.back()) == 0) --i;
    reverse(p.begin() + i + 1, p.end());

    vector<Point> hull = {p[0]};
    for(int i = 1; i < n; ++i){
        while(hull.size() >= 2 and cross(hull[hull.size() - 2], hull[hull.size() - 1], p[i]) < 0)
            hull.pop_back();
        hull.push_back(p[i]);
    }
    return hull;
}