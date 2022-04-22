
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) a[i]=i+1;
    if(n%2==1) cout<<"-1"; 
    else{
        for(int i=0; i<n; i+=2) swap(a[i], a[i+1]);
        for(int i=0; i<n; i++) cout<<a[i]<<" ";
    }
}
