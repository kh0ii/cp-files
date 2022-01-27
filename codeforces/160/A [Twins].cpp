#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n], sum=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a, a+n);
    int total=0, res=0;
    for(int i=n-1; i>=0; i--){
        total+=a[i];
        res++;
        if(total>sum/2) break;
    }
    cout<<res;
}

