#include <bits/stdc++.h>
using namespace std;
int n;
string j;
void solve(){
    cin>>n;
    string s;
    for(int i=0; i<n; i++){
        cin>>j;
        s+=j;
    }
    string d;
    bool flag=true;
    for(int i=0; i<s.length(); i++){
        if(d.find(s[i])==string::npos){
            d+=s[i];
            if(count(s.begin(), s.end(), s[i])%n!=0){
                flag=false;
                break;
            }
        }
    }
    if(flag)
        cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}

