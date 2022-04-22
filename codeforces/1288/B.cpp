#include <bits/stdc++.h>
using namespace std;

long long len(long long n){
    long long cnt = 0;
    while(n>0){
        n/=10;
        cnt++;
    }
    return cnt;
}

int main(){
    int t; cin>>t;
    while(t--){
        long long a, b; cin>>a>>b;
        cout<<a*(len(b+1)-1)<<'\n';
    }
    
    return 0;
}