#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, a, b;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>a>>b;
        if(min(a, b)*2<=max(a, b)) cout<<pow(max(a, b), 2)<<"\n";
        else if(min(a, b)*2>max(a, b)) cout<<pow(min(a, b)*2, 2)<<"\n";
    }
}
