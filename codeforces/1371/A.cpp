#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t, n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<(n%2==0 ? n/2 : (n+1)/2)<<"\n";
    }
}
