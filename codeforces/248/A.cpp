#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][2];
    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++) cin>>a[i][j];
    }
    int x=0, y=0, res=0;
    for(int i=0; i<n; i++){
        if(a[i][0]==1) x++;
        else y++;
    }
    if(x>y) res+=y;
    else res+=x;
    x=0;
    y=0;
    for(int i=0; i<n; i++){
        if(a[i][1]==1) x++;
        else y++;
    }
    if(x>y) res+=y;
    else res+=x;
    cout<<res;
}

