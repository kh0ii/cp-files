#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        for(int i=0; i<s.length(); i+=2){
            cout<<s[i];
        }
        if(s.length()%2==0) cout<<s[s.length()-1];
        cout<<"\n";
    }
}
