#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, k;
    cin>>n>>k;
    if(n%2==0){
        if(k>n/2){
            cout<<((k-n/2)-1)*2+2;
        }
        else cout<<(k-1)*2+1;
    }
    else{
        if(k>(n+1)/2){
            cout<<((k-(n+1)/2)-1)*2+2;
        }
        else cout<<(k-1)*2+1;
    }
}

