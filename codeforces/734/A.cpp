#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a=0, t=0;
    string result;
    cin>>n;
    cin>>result;
    for(int i=0; i<n; i++){
        if(result[i]=='A') a++;
        else t++;
    }
    if(a>t) cout<<"Anton";
    else if(t>a) cout<<"Danik";
    else cout<<"Friendship";
    return 0;
}
