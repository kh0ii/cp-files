#include <bits/stdc++.h>
using namespace std;
int k, res=0;
void solve(){
    cin>>k;
    res=1;
    int i=1;
    while(res!=k){
        i++;
        if(i%3==0||i%10==3){}
        else res++;
    }
    cout<<i<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}

