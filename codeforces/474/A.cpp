#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    char a;
    cin>>a>>s;
    string key = "qwertyuiopasdfghjkl;zxcvbnm,./";
    if(a=='R'){
        for(int i=0; i<s.length(); i++){
            for(int j=0; j<key.length(); j++){
                if(s[i]==key[j]){
                    cout<<key[j-1];
                    break;
                }
            }
        }
    }
    else{
        for(int i=0; i<s.length(); i++){
            for(int j=0; j<key.length(); j++){
                if(s[i]==key[j]){
                    cout<<key[j+1];
                    break;
                }
            }
        }
    }
}

