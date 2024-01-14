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