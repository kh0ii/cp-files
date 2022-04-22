#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int res=0;
    while(n!=0){
        res++;
        if(res%m==0) n++;
        n--;
    }
    cout<<res;
}

