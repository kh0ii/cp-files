#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s[n];
    for(int i=0; i<n; i++) cin>>s[i];
    char a = s[0][0];
    char b = s[0][1];
    bool ans=true;
    for(int i=0; i<n; i++){
        if(s[i][i]!=a) ans=false;
        else if(s[i][n-1-i]!=a) ans=false;
    }
    int total = n*n - n*2 + 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(s[i][j]==b) total--;
        }
    }
    if(ans&&total==0) cout<<"YES";
    else cout<<"NO";
}
