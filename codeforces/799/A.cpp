#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, t, k, d;
    cin>>n>>t>>k>>d;
    int a = (n+k-1)/k*t;
    int t1=0, t2=d;
    while(n>0){
        if(t1>t2) t2+=t;
        else t1+=t;
        n-=k;
    }
    int b = max(t1, t2);
    if(b<a) cout<<"YES";
    else cout<<"NO";
}

