#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, res=0, k=0;
    string s;
    cin>>n>>s;
    for(int i=0; i<n; i++){
        if(s[i]=='x') k++;
        else k=0;
        if(k>=3) res++;
    }
    cout<<res;
}

