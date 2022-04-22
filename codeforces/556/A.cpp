#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;
    int x=0, y=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='1') x++;
        else if(s[i]=='0') y++;
    }
    cout<<(x+y)-2*min(x, y);
}

