#include <bits/stdc++.h>
using namespace std;
long long a, b, c;
void solve(){
    cin>>a>>b>>c;
    int size = abs(a-b);
    if(size*2<c||size*2<max(a, b)||(size==1&&min(a, b)!=1)) cout<<-1<<"\n";
    else cout<<(c>size ? c-size : size+c)<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}

