#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, res=0;
    cin>>n>>m;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a, a+n);
    for(int i=0; i<n; i++){
        if(a[i]<0&&m>0){
            res+= abs(a[i]);
            m--;
        }
    }
    cout<<res;
}

