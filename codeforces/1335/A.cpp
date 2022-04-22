#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t, n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%2==0 && n!=0) cout<<n/2-1<<"\n";
        else if(n==0) cout<<0<<"\n";
        else cout<<n/2<<"\n";
    }
}