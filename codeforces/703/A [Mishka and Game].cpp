#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, m=0, c=0, mi, ci;
    cin>>t;
    while(t--){
        cin>>mi>>ci;
        if(mi>ci) m++;
        else if(mi<ci) c++;
    }
    if(m>c) cout<<"Mishka";
    else if(m<c) cout<<"Chris";
    else cout<<"Friendship is magic!^^";
}
