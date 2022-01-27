#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, total=0, res=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++)
        if(a[i]==1) total++;

    cout<<total<<"\n";
    for(int i=0; i<n; i++){
        if(a[i]==1){
            if(res!=0)
                cout<<res<<" ";
            res=1;
        }
        else res++;
    }
    cout<<res;
}
