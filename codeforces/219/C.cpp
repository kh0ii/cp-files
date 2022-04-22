#include "bits/stdc++.h"
using namespace std;

int n, k, ans;
string a;
set<char> st;

char get(char f, char s){
    char res;
    st.erase(f);
    st.erase(s);
    res = *st.begin();
    st.insert(f);
    st.insert(s);
    return res;
}

void solve(){
    cin >> n >> k;
    cin >> a;
    if(k > 2){
        for(int i = 0; i < k; ++i)
            st.insert(char('A' + i));
        for(int i = 0; i < n - 1; ++i){
            if(a[i] == a[i + 1]){
                if(i < n - 2)
                    a[i + 1] = get(a[i], a[i + 2]);
                else a[i + 1] = (a[i] == 'A' ? 'B' : 'A');
                ++ans;
            }
        }
    }
    else {
        string f = "", s = "";
        int fd = 0, sd = 0;
        for(int i = 0; i < n; ++i){
            if(i & 1){
                f.push_back('A');
                s.push_back('B');
            }
            else{ 
                f.push_back('B');
                s.push_back('A');
            }
        }
        for(int i = 0; i < n; ++i){
            if(a[i] != f[i]) ++fd;
            else if(a[i] != s[i]) ++sd;
        }
        if(fd > sd){
            a = s;
            ans = sd;
        }
        else{
            a = f;
            ans = fd;
        }
    }
    cout << ans << '\n';
    cout << a;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int test = 1;
//    cin >> test;
    for(int i=1; i<=test; ++i){
        solve();
    }
    return 0;
}
// Give yourself ~30 minutes of being stuck before reading editorial
// Write stuff down

