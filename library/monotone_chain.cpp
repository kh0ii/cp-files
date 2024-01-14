vector<Point> convex_hull(vector<Point> p, int n){
    sort(p.begin(), p.end(), [](const Point &A, const Point &B){
        return A.x != B.x ? A.x < B.x : A.y < B.y;
    });

    Point st = p[0], en = p[n - 1];

    vector<Point> up = {p[0]};
    vector<Point> down = {p[0]};

    for(int i = 1; i < n; ++i){
        // upper hull
        if(i == n - 1 or cross(st, p[i], en) < 0){
            while((int)up.size() >= 2 and cross(up[up.size() - 2], up.back(), p[i]) >= 0)
                up.pop_back();
            up.push_back(p[i]);
        }
        // lower hull
        if(i == n - 1 or cross(st, p[i], en) > 0){
            while((int)down.size() >= 2 and cross(down[down.size() - 2], down.back(), p[i]) <= 0)
                down.pop_back();
            down.push_back(p[i]);
        }
    }
    p.clear();
    for(int i = 0; i < (int)up.size(); ++i)
        p.push_back(up[i]);
    for(int i = down.size() - 2; i >= 1; --i)
        p.push_back(down[i]);
    // return hull in clockwise order
    return p;
}

// From VNOI
// vector<Point> convex_hull(vector<Point> p, int n) {
//     sort(p.begin(), p.end(), [](const Point &A, const Point &B) {
//         if (A.x != B.x) return A.x < B.x;
//         return A.y < B.y;
//     });

//     vector<Point> hull;
//     hull.push_back(p[0]);

//     for (int i = 1; i < n; ++i) {
//         while (hull.size() >= 2 && cross(hull[hull.size() - 2], hull.back(), p[i]) > 0) {
//             hull.pop_back();
//         }
//         hull.push_back(p[i]);
//     }

//     for (int i = n - 2; i >= 0; --i) {
//         while (hull.size() >= 2 && cross(hull[hull.size() - 2], hull.back(), p[i]) > 0) {
//             hull.pop_back();
//         }
//         hull.push_back(p[i]);
//     }

//     if (n > 1) hull.pop_back();

//     return hull;
// }