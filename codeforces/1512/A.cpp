#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t, n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];    
        for(int i=1; i<n-1; i++){
            if(a[i]!=a[i+1] && a[i]==a[i-1]){
                cout<<i+2<<"\n";
                break;
            }
            else if(a[i]!=a[i+1] && a[i]!=a[i-1]){
                cout<<i+1<<"\n";
                break;
            }
            else if(a[i]==a[i+1] && a[i]!=a[i-1]){
                cout<<i<<"\n";
                break;
            }
        }
    }
}