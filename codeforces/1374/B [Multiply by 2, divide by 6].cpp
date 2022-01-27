#include <bits/stdc++.h>
using namespace std;
int n;
void solve(){
    cin>>n;
    int res=0;
    while(n!=1){
        if(n%6==0){
            res++;
            n/=6;
        }
        else if(n%3==0){
            res+=2;
            n/=3;
        }
        else {
            cout<<-1<<"\n";
            return;
        }
    }
    cout<<res<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}

