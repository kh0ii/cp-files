#include <bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE
    int t;
    cin>>t;
    while(t--){
        int n, res=0;
        cin>>n;
        if(n%10==9) cout<<n/10+1<<"\n";
        else cout<<n/10<<"\n";
    }
}
