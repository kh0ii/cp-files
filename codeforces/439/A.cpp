#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, d;
    cin>>n>>d;
    int a[n], sum=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }
    sum+=(n-1)*10;
    if(sum>d) cout<<-1;
    else{
        int j=0, res=0;
        res+=(n-1)*2;
        d-=sum;
        while(d-5>=0){
            d-=5;
            res++;
        }
        cout<<res;
    }
}
