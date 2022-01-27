#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long j, k, res=1, best=1;
    cin>>k;
    n--;
    while(n--){
        cin>>j;
        if((j%2==0 ? j/2 : (j+1)/2)>k) res=1;
        else res++;
        k=j;
        best = max(best, res);
    }
    cout<<best;
}

