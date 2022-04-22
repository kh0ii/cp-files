#include <bits/stdc++.h>
int n,m,a;
using namespace std;
int main()
{
    long long i,j;
    cin>>n>>m>>a;
    i=n/a;
    j=m/a;
    if(a*i!=n)
    i++;
    if(j*a!=m)
    j++;
    cout<<i*j;
    return 0;
}
