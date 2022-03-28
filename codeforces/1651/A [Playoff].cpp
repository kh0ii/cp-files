#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans =  (1 << n) - 1;
        cout << ans << '\n';
    }
    return 0;
}