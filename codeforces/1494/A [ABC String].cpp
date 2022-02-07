#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int mod = 1000000007; //998244353;

string s;

bool check(string t){
    stack<char> st;
    for(int i = 0; i < t.size(); ++i){
        if(t[i] == '(')
            st.push(t[i]);
        else if(t[i] == 'A' or t[i] == 'B' or t[i] == 'C') return 0;
        else if(st.empty() or st.top() != '(')
            st.push('-');
        else st.pop();
    }
    return st.empty();
}

void solve(){
    cin >> s;
    int n = s.size();
    if(s.front() == s.back()){
        cout << "NO\n";
        return;
    }
    for(int i = 1; i < n; ++i){
        if(s[i] == s.front())
            s[i] = '(';
    }
    s[0] = '(';
    for(int i = n - 2; i >= 0; --i){
        if(s[i] == s.back())
            s[i] = ')';
    }
    if(check(s)){
        cout << "YES\n";
        return;
    }
    s[n - 1] = ')';
    string t = s;
    for(int i = 0; i < n; ++i)
        if(t[i] != '(' and t[i] != ')')
            t[i] = '(';
    if(check(t)){
        cout << "YES\n";
        return;
    }
    t = s;
    for(int i = 0; i < n; ++i)
        if(t[i] != '(' and t[i] != ')')
            t[i] = ')';
    if(check(t)){
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int test = 1;
    cin >> test;
    for(int i=1; i<=test; ++i){
//        cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}
// Give yourself ~30 minutes of being stuck before reading editorial
// Write stuff down

