#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;

void solve(){
    int n;
    cin >> n;
    string op, cd;
    vector<string> dir;
    while(n--){
        cin >> op;
        if(op == "pwd"){
            cout << '/';
            for(string s : dir)
                cout << s << '/';
            cout << '\n';
        }
        else{
            cin >> cd;
            cd += '/';
            string s;
            for(int i=0; i<cd.size(); ++i){
                if(cd[i] == '/'){
                    if(i == 0)
                        dir.clear();
                    else{
                        if(s == "..")
                            dir.pop_back();
                        else
                            dir.push_back(s);
                        s.clear();
                    }
                }
                else s += cd[i];
            }
        }

    }
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    //cin >> t;
    while(t--)
    	solve();
    return 0;
}



