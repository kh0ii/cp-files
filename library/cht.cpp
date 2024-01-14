struct CHT{
    // slope decreasing, querying min
    using type = long long;
    struct Line{
        type a, b; // y = ax + b: a is slope, b is intercept
        Line(type a, type b) : a(a), b(b) {}

        type val(type x){
            return x * a + b;
        }

        type intersect(const Line &other){
            return (other.b - b + a - other.a) / (a - other.a);
        }
    };

    deque<pair<Line, type>> dq;

    void add(type a, type b){
        Line line(a, b);
        while((int)dq.size() > 1 and dq.back().second >= dq.back().first.intersect(line))
            dq.pop_back();
        if(dq.empty())
            dq.emplace_back(line, 0);
        else
            dq.emplace_back(line, dq.back().first.intersect(line));
    }

    type query(type x){
        pair<Line, type> res = *lower_bound(dq.rbegin(), dq.rend(),
                                             make_pair(Line(0, 0), x),
                                             [&](const pair<Line, type> &a, const pair<Line, type> &b){
                                                return a.second > b.second;
                                             });
        return res.first.val(x);
    }
};