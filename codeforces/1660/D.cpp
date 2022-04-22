/**
 *	author: kh0i
 *	created: 31.03.2022 23:25:15
**/
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

using ll = long long;

void solve(){
    int n, ans = 0, ansl, ansr;
    cin >> n;
    vector<int> a(n + 1, 0), f1(n + 1, 0), f2(n + 1, 0), tot(n + 1, 0);
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        f1[i] = f1[i - 1] + (a[i] == 2);
        f2[i] = f2[i - 1] + (a[i] == -2);
        tot[i] = tot[i - 1] + (a[i] < 0);
    }
    for(int j = 1; j <= n; ++j){
        if(a[j] == 0) continue;
        int l = j, r = j;
        while(r + 1 <= n and a[r + 1] != 0){
            ++r;
        }
        int epos = -1, opos = -1, sum;
        for(int i = l - 1; i <= r; ++i){
            if(tot[i] & 1 and opos == -1)
                opos = i;
            else if(tot[i] % 2 == 0 and epos == -1)
                epos = i;
        }
//        debug(l, r, opos, epos);
        for(int i = l; i <= r; ++i){
            if(tot[i] & 1 and opos != -1 and opos != i){
                sum = f1[i] - f1[opos] + f2[i] - f2[opos];
//                debug(opos, i, sum);
                if(sum > ans){
                    ansl = opos, ansr = n - i;
                    ans = sum;
                }
            }
            else if(tot[i] % 2 == 0 and epos != -1 and epos != i){
                sum = f1[i] - f1[epos] + f2[i] - f2[epos];
//                debug(epos, i, sum);
                if(sum > ans){
                    ansl = epos, ansr = n - i;
                    ans = sum;
                }
            }
        }
        j = r;
    }
    if(ans == 0){
        cout << n << ' ' << 0 << "\n";
    }
    else{
        cout << ansl << ' ' << ansr << '\n';
    }
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(0);
    int test = 1;
    cin >> test;
    for(int i = 1; i <= test; ++i){
        solve();
    }
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}

// Write stuff down

