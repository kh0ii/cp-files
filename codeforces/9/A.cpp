#include <bits/stdc++.h>
using namespace std;
int main(){
    int y, w, x, l, k=6;
    cin>>y>>w;
    x = 6-max(y, w)+1;
    if(x==6) cout<<"1/1";
    else{
        while(__gcd(x, k)>1){
            l = __gcd(x, k);
            x/=l;
            k/=l;
        }
        cout<<x<<"/"<<k;
    }
}
