#include <bits/stdc++.h>
using namespace std;
int n, res;
void solve(){
    cin>>n;
    res=0;
    int x, y, a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n-1; i++){
        x = a[i];
        y = a[i+1];
        if(x<(y%2==0 ? y/2 : (y+1)/2)){
            while(x<(y%2==0 ? y/2 : (y+1)/2)){
                x*=2;
                res++;
            }
        }
        else if((x%2==0 ? x/2 : (x+1)/2)>y){
            while((x%2==0 ? x/2 : (x+1)/2)>y){
                y*=2;
                res++;
            }
        }
    }
    cout<<res<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}
