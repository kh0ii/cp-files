#include <bits/stdc++.h>
using namespace std;
string s;
bool flag;
void solve(){
    cin>>s;
    flag=true;
    int a=0, n=s.length();
    while(flag){
        flag=false;
        for(int i=0; i<n-1; i++){
            if(s[i]!=s[i+1]){
                int res=2;
                flag=true;
                while(res--){
                    for(int j=i; j<n; j++){
                        s[j] = s[j+1];
                    }
                }
                n-=2;
                a++;
            }
        }
    }
    if(a%2==0) cout<<"NET\n";
    else cout<<"DA\n";
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}

