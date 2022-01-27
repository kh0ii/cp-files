#include <bits/stdc++.h>
using namespace std;
int a, b, n, res;
void solve(){
    res=0;
    cin>>a>>b>>n;
    while(n>=a&&n>=b){
        (a > b ? b+=a : a+=b);
        res++;
    }
    cout<<res<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
