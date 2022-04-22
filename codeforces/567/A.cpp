#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        long long x = min(abs(a[i]-a[i-1]), abs(a[i]-a[i+1]));
        long long y = max(abs(a[i]-a[0]), abs(a[i]-a[n-1]));
        if(i==0) x=abs(a[i]-a[i+1]);
        cout<<x<<" "<<y<<"\n";
    }
        
}

