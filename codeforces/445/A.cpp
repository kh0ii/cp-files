#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int inf = 1e9+9, mod = 1e9+7;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, m;
    cin>>n>>m;
    string s[n];
    for(int i=0; i<n; i++)
        cin>>s[i];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(s[i][j] != '-') cout << ((i+j) % 2 ? 'W' : 'B');
            else cout<<s[i][j];
        }
        cout<<'\n';
    }
    return 0;
}



