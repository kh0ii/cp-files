#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, a;
    cin>>s;
    for(int i=0; i<5; i++){
        cin>>a;
        if(a[0]==s[0]||a[1]==s[1]){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}
