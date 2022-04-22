#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    int ans=0;
    for(int i=1; i<n; i+=2){
        if(s[i]==s[i-1]){
            s[i] = (s[i-1]=='a' ? 'b' : 'a');
            ans++;
        }
    }
    cout<<ans<<'\n';
    for(int i=0; i<n; i++) cout<<s[i];
}
