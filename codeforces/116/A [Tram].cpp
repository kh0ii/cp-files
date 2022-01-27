#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, a=0, b=0;
    cin>>n;
    while(n>0){
        int o, i;
        cin>>o>>i;
        a = a - o + i;
        if(a>b) b=a;
        n--;
    }
    cout<<b;
}
