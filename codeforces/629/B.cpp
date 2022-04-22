#include <bits/stdc++.h>
using namespace std;
int f[367]{0}, m[367]{0};
int main(){
    int n;
    cin>>n;
    char g;
    int j, k;
    while(n--){
        cin>>g>>j>>k;
        if(g=='F'){
            for(int i=j; i<=k; i++) f[i]++;
        }
        else for(int i=j; i<=k; i++) m[i]++;
    }
    int res=0;
    for(int i=0; i<367; i++) res = max(res, min(f[i], m[i])*2);
    cout<<res;
}

