/**
 *	author: kh0i
 *	created: 13.04.2022 16:04:43
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

using ll = long long;

struct Point{
    ll x, y;
    friend ostream& operator<<(ostream &out, const Point &a){
        out << "[" << a.x << ' ' << a.y << "]";
        return out;
    }
};

struct Segment {
    Point s, e;
    friend ostream& operator<<(ostream &out, const Segment &k){
        out << '[' << k.s << ' ' << k.e << ']';
        return out;
    }
};

void solve(){
    vector<Point> a(3);
    vector<Segment> ans;
    vector<int> sw = {0, 1, 2};
    for(auto &[x, y] : a){
        cin >> x >> y;
    } 
    ll alen = 1e12;
    do{
        vector<Segment> pans;
        Point p1 = a[sw[0]], p2 = a[sw[1]], p3 = a[sw[2]];
        ll len = 0;
        // y axis
        if(p1.y != p2.y)
            pans.push_back({{p1.x, p1.y}, {p1.x, p2.y}});
        if(p2.y != p3.y)
            pans.push_back({{p3.x, p3.y}, {p3.x, p2.y}});
        pans.push_back({{min(p1.x, min(p2.x, p3.x)), p2.y}, {max(p3.x, max(p2.x, p1.x)), p2.y}});
        for(auto f : pans){
            len += abs(f.s.x - f.e.x) + abs(f.s.y - f.e.y);
        }
        if(len < alen){
            ans = pans;
            alen = len;
        }
        debug(p1, p2, p3, pans, len);
    }while(next_permutation(sw.begin(), sw.end()));
    cout << ans.size() << '\n';
    for(auto f : ans){
        cout << f.s.x << ' ' << f.s.y << ' ' << f.e.x << ' ' << f.e.y << '\n';
    }
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(0);
    int test = 1;
//    cin >> test;
    for(int i = 1; i <= test; ++i){
        solve();
    }
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}


