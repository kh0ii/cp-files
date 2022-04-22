#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin>>s>>t;
    bool flag = true;
    for(int i=0; i<s.length(); i++){
        if(s[i]!=t[s.length()-1-i]) flag = false;
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
    return 0;
}
