#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, res=0;
    cin>>n>>k;
    int result[n];
    for(int i=0; i<n; i++) cin>>result[i];
    for(int i=0; i<n; i++){
        if(result[i]>=result[k-1] && result[i]>0) res++;
        else if(result[i]<result[k]) break;
    }
    cout<<res;
    return 0;
}
