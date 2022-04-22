#include <bits/stdc++.h>
using namespace std;

int main(){
    string name;
    cin>>name;
    int res=0;
    bool flag;
    for(int i=0; i<name.length(); i++){
    flag=true;
        for(int j=0; j<i; j++){
            if(name[i]==name[j]) flag=false;
        }
        if(flag) res++;
    }
    if(res%2==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
    return 0;
}
