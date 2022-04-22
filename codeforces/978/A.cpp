#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n], res=0;
    bool flag;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++){
        flag = true;
        for(int j=i+1; j<n; j++)
            if(a[i]==a[j]) flag = false;
        if(flag) res++;
    }
    cout<<res<<"\n";
    for(int i=0; i<n; i++){
        flag = true;
        for(int j=i+1; j<n; j++){
            if(a[j]==a[i]) flag=false;
        }
        if(flag) cout<<a[i]<<" ";
    }
}

