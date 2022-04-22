#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    if(n<=2) cout<<0;
    else{
        sort(a, a+n);
        int x = a[0];
        int y = a[n-1];
        int res=0;
        for(int i=1; i<n-1; i++){
            if(a[i]>x&&a[i]<y) res++;
        }
        cout<<res;
    }
}

