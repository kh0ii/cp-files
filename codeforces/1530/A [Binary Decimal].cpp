#include <bits/stdc++.h>
using namespace std;
int n;
void solve(){
    cin>>n;
    int x=0;
    while(n>0){
        x = max(x, n%10);
        n/=10;
    }
    cout<<x<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}

