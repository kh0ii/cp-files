#include <bits/stdc++.h>
using namespace std;
int main(){
    int m, n, res;
    cin>>m>>n;
    if(m*n%2==1) res = (m*n-1)/2;
    else res = m*n/2;
    cout<<res;
    return 0;
}
