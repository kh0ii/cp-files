#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool flag=true;
    int count4=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]-'0'==4){
            count4++;
            if(count4==1){
                if(s[i-1]-'0'!=1){
                    cout<<"NO";
                    flag = false;
                    break;
                }
            }
        }
        else if(s[i]-'0'==1) count4=0;
        else if(s[i]-'0'!=4 || s[i]-'0'!=1){
            cout<<"NO";
            flag=false;
            break;
        }
        if(count4>2){
            cout<<"NO";
            flag=false;
            break;
        }
    }
    if(flag) cout<<"YES";
}

