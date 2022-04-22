#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    if(n>=0) cout<<n;
    else {
        int x = n/10;
        int y = n/10- x%10 + n%10;
        if(x>y) cout<<x;
        else cout<<y;
    }
}

