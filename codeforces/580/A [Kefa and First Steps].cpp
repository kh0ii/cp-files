#include <bits/stdc++.h>
using namespace std;
int main(){
     #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE
    int t, c=1, res=0;
    cin>>t;
    int a[t];
    for(int i=0; i<t; i++){
        cin>>a[i];
        if(a[i]>=a[i-1]){
            res++;
            c = max(c, res);
        }
        else res=1;
    }
    cout<<c;
}
