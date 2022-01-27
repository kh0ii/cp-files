#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    bool flag=false;
    cin>>t;
    string s[t];
    for(int i=0; i<t; i++) cin>>s[i];
    for(int i=0; i<t; i++){
        for(int j=0; j<s[i].length()-1; j++){
            if(s[i][j]==s[i][j+1]&&s[i][j]=='O'&&s[i][j+1]=='O'&&flag==false){
                flag = true;
                s[i][j] = char(43);
                s[i][j+1] = char(43);
            }
        }
    }
    if(flag){
        cout<<"YES\n";
        for(int i=0; i<t; i++) cout<<s[i]<<"\n";
    }
    else cout<<"NO\n";
    
}
