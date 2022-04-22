#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t, n, sum;
    bool flag;
    cin>>t;
    int a;
    while(t--){
        sum=0;
        flag=false;
        cin>>n;
        while(n--){
            cin>>a;
            if(a==1) flag=true;
            sum+=a;
        }
        if(sum%2==0 && flag) cout<<"YES\n";
        else if(sum%4==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
}