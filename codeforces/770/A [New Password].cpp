#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    int j=0;
    for(int i=0; i<n; i++){
        if(k==j) j=0;
        cout<<char(97+j);
        j++;
    }
}
