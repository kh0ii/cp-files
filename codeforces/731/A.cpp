#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int ans=0;
    ans += min(abs(s[0]-'a'), 26-abs(s[0]-'a'));
    for(int i=0; i<s.size()-1; i++){
        ans+=min(abs(s[i]-s[i+1]), 26-abs(s[i]-s[i+1]));
    }
    cout<<ans;
}

