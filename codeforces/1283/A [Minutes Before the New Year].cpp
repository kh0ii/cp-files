#include <bits/stdc++.h>
using namespace std;
int h, m;
void solve(){
    cin>>h>>m;
    cout<<(23-h)*60 +(60-m)<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
