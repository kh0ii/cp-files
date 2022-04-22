#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int mod = 1000000007; //998244353;
int n;
string s;
void solve(){
    cin >> n;
    cin >> s;
    string a="", b="";
    bool f = 0;
    for(char c : s){
        if(c == '0'){
            a.push_back('0'); b.push_back('0');
        }
        else if(c == '1'){
            if(f){
                a.push_back('1'); b.push_back('0');
                continue;
            }
            a.push_back('0'); b.push_back('1');
            f = 1;
        }
        else{
            if(f){
                a.push_back('2'); b.push_back('0');
                continue;
            }
            a.push_back('1'); b.push_back('1');
        }
    }
    cout << a << '\n' << b << '\n';
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

