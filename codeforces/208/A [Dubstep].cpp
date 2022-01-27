#include <bits/stdc++.h>
using namespace std;
string res(string s){
    int d ,len=s.length();
    for(int i=0; i<len; i++){
        if(s[i]==' '){
            d = i;
            while(s[d+1]==' '){
                for(int j=d; j<len; j++) s[j] = s[j+1];
                len--;
            }
        }
    }
    while(s[0]==' '){
        for(int j=0; j<len; j++) s[j] = s[j+1];
        len--;
    }
    s.resize(len);
    return s;
}
int main(){
    string s, re=" ";
    cin>>s;
    size_t pos = s.find("WUB");
    bool flag = true;
    while(flag){
        size_t pos = s.find("WUB");
        if(pos != string::npos){
            s.replace(pos, 3, re);
        }
        else flag=false;
    }
    s = res(s);
    cout<<s;
}
