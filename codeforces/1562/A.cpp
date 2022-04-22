#include <bits/stdc++.h>
using namespace std;
int l, r;
void solve(){
    cin>>l>>r;
    if(l==r) cout<<l%r;
    else if(r%2==0){
        if(r/2>=l) cout<<r/2-1;
        else if(r/2<l) cout<<r-l;
    }
    else if(r%2==1){
        if((r+1)/2>=l) cout<<(r+1)/2-1;
        else if((r+1)/2<l) cout<<r-l;
    }
    cout<<'\n';
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}

