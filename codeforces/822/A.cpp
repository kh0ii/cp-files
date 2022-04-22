#include <bits/stdc++.h>
using namespace std;
int factorial(long long n){
    return (n==1||n==0) ? 1 : n*factorial(n-1);
}
int main(){
    long long a, b;
    cin>>a>>b;
    cout<<factorial(min(a, b));
}

