#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int a[m];
    for(int i=0; i<m; i++) cin>>a[i];
    int best = 1000;
    sort(a, a+m);
    for(int i=0; i<m-n+1; i++){
        best = min(best, a[i+n-1]-a[i]);
    }
    cout<<best;
}

