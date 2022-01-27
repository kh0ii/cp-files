#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, res=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a, a+n);
    for(int i=0; i<n-1; i++){
        if(a[i]==a[n-1]){}
        else res+=a[n-1]-a[i];
    }
    cout<<res;
}