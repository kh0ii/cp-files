#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    int res=1, _max=1;
    for(int i=0; i<n-1; i++){
        if(a[i]<a[i+1]) res++;
        else res=1;
        _max = max(_max, res);
    }
    cout<<_max;
}

