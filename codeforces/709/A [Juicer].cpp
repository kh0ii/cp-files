#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, b, d;
    cin>>n>>b>>d;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    int res=0, sum=0;
    for(int i=0; i<n; i++){
        if(a[i]<=b) sum+=a[i];
        if(sum>d){
            res++;
            sum=0;
        }
    }
    cout<<res;
}

