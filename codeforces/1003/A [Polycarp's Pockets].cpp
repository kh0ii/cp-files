#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, _max=1, res;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++){
        res=1;
        for(int j=i+1; j<n; j++){
            if(a[i]==a[j]) res++;
        }
        _max = max(res, _max);
    }
    cout<<_max;
}

