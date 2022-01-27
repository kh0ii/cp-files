#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, x;
    cin>>n>>x;
    int res=0;
    while(n--){
        char a;
        int j;
        cin>>a>>j;
        if(a=='+') x+=j;
        else {
            if(x>=j) x-=j;
            else res++;
        }
    }
    cout<<x<<" "<<res;
}

