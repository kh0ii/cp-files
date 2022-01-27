#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, j;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>j;
        cout<<(j%2==0? j-1 : j)<<" ";
    }    
}

