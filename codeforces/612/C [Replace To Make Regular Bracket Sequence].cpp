#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;

int total = 0;
string s;
stack<char> cur;

bool isopen(char k){
    return (k == '[' or k == '(' or k == '{' or k == '<');
}

bool iseq(char a, char b){
    if(a == '[' and b == ']')
        return true;
    if(a == '<' and b == '>')
        return true;
    if(a == '{' and b == '}')
        return true;
    if(a == '(' and b == ')')
        return true;
    return false;
}

void solve(){
    cin >> s;
    for(int i=0; i<s.size(); ++i){
        if(isopen(s[i])){
            cur.push(s[i]);
        }
        else{
            if(cur.empty()){
                cout << "Impossible";
                return;
            }
            if(!iseq(cur.top(), s[i]))
                ++total;
            cur.pop();
        }
    }
    if(cur.empty())
        cout << total;
    else cout << "Impossible";
}
int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    //cin >> t;
    while(t--)
    	solve();
    return 0;
}



