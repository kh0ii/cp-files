#include "bits/stdc++.h"
using namespace std;

int n;

vector<string> ans;

int mindig(int n){
    string s = to_string(n);
    char mn = char(99);
    for(char c : s)
        if(c != '0')
            mn = min(mn, c);
    return mn - '0';
}

void get(int &n){
    int f = mindig(n);
    string s = to_string(n), k = "";
    for(int i = 0; i < s.size(); ++i){
        if(s[i] != '0'){
            s[i] = char(s[i] - f);
            k.push_back('1');
        }
        else k.push_back('0');
    }
    for(int i = 0 ; i < f; ++i)
        ans.push_back(k);
    while(s.front() == '0')
        s.erase(s.begin());
    if(s.empty())
        n = 0;
    else
        n = stoi(s);
}

void solve(){
    cin >> n;
    while(n > 0){
        get(n);
//        cerr << n << '\n';
    }
    cout << ans.size() << '\n';
    for(string k : ans)
        cout << k << ' ';
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

