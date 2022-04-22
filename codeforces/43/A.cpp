#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k, a=0, b=0;
    cin>>n;
    string team[n];
    for(int i=0; i<n; i++) cin>>team[i];
    for(int i=0; i<n; i++){
        if(team[i]==team[0]) a++;
        else{
            b++;
            k = i;
        }
    }
    if(a>b) cout<<team[0];
    else cout<<team[k];
    return 0;
}
