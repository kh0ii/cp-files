#include <bits/stdc++.h>
using namespace std;
int s1, s2, s3, s4;
void solve(){
    cin>>s1>>s2>>s3>>s4;
    if(max(s1, s2)>min(s3, s4)&&max(s3, s4)>min(s1, s2)) cout<<"YES";
    else cout<<"NO";
    cout<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}
