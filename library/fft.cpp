struct Complex{
    double r, i;
    Complex() : r(0), i(0) {}
    Complex(double t) : r(cos(t)), i(sin(t)) {}
    Complex(double r, double i) : r(r), i(i) {}
    const Complex operator + (const Complex &o) const {
        return Complex(r + o.r, i + o.i);
    }
    const Complex operator - (const Complex &o) const {
        return Complex(r - o.r, i - o.i);
    }
    const Complex operator * (const Complex &o) const {
        return Complex(r * o.r - i * o.i, r * o.i + i * o.r);
    }
    void operator /= (double d){
        this->r /= d;
        this->i /= d;
    }
};

const int LG = 20;
const int N = 1 << LG;
const double PI = acos(-1);

int rev[N];

void precalc(int lg){
    int n = 1 << lg;

    for(int i = 0; i < n; ++i){
        rev[i] = 0;
        for(int j = 0; j < lg; ++j)
            if(i & (1 << j))
                rev[i] |= (1 << (lg - j - 1));
    }
}

void fft(vector<Complex> &a, int lg, bool inv = 0){
    int n = 1 << lg;
    for(int i = 0; i < n; ++i)
        if(i < rev[i])
            swap(a[i], a[rev[i]]);

    for(int len = 2; len <= n; len <<= 1){
        Complex wlen((inv ? -1 : 1) * 2 * PI / len);
        for(int i = 0; i < n; i += len){
            Complex w(1.0, 0.0);
            for(int j = 0; j < (len >> 1); ++j){
                Complex x = a[i + j], y = w * a[i + j + (len >> 1)];
                a[i + j] = x + y;
                a[i + j + (len >> 1)] = x - y;
                w = w * wlen;
            }
        }
    }

    if(inv)
        for(int i = 0; i < n; ++i)
            a[i] /= n;
}

vector<Complex> multiply(vector<Complex> a, vector<Complex> b){
    int n = 1, lg = 0;
    int na = sz(a), nb = sz(b);

    while(n < na + nb)
        n <<= 1, ++lg;

    precalc(lg);

    a.resize(n);
    b.resize(n);

    fft(a, lg);
    fft(b, lg);
    for(int i = 0; i < n; ++i)
        a[i] = a[i] * b[i];

    fft(a, lg, 1);

    vector<Complex> c;
    for(int i = 0; i < na + nb - 1; ++i)
        c.push_back(a[i]);

    return c;
}
