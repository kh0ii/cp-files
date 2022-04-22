#include <bits/stdc++.h>
using namespace std;
int n;
bool flag;
void solve(){
    cin>>n;
    flag=false;
    int k = n/2020 + 1;
    for(int i=1; i<=k; i++){
        if((n-(2021*i))%2020==0&&n-(2021*i)>0){
            flag=true;
            break;
        }
    }
    for(int i=1; i<k; i++){
        if((n-(2020*i))%2021==0&&n-(2020*i)>0){
            flag = true;
            break;
        }
    }
    if(n%2020==0||n%2021==0) flag=true;
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}

