#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int j=0, res=1;
    getline(cin, s);
    char c[s.length()/3];
    for(int i=0; i<s.size(); i++){
        if(s[i]=='{' || s[i]=='}' || s[i]==',' || s[i]==' '){
        }
        else{
            c[j]=s[i];
            j++;
        }
    }
    sort(c, c+j);
    for(int i=1; i<j; i++){
        if(c[i]==c[i-1]){
        }
        else res++;
    }
    if(s.size()/3 < 1) cout<<0;
    else cout<<res;
}