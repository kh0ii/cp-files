#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;

string ck(int a){
    string mask = "";
    while(a > 0){
        if(a%10 == 4 or a%10 == 7){
            mask = char(a%10 + '0') + mask;
        }
        a/=10;
    }
    return mask;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int a, b; cin>>a>>b;
    if(a < b) cout<<b;
    else{
        string k = to_string(b);
        if(ck(a)==k) a++;
        while(1){
            if(ck(a) == k){
                cout<<a;
                return 0;
            }
            a++;
        }
    }
    return 0;
}



