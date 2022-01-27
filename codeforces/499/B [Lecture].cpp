#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    string a[m][2], b[n];
    for(int i=0; i<m; i++){
        for(int j=0; j<2; j++) cin>>a[i][j];
    }
    bool flag;
    for(int i=0; i<n; i++) cin>>b[i];
    for(int i=0; i<n; i++){
        flag = true;
        for(int j=0; j<m; j++){        
            if(b[i]==a[j][0]||b[i]==a[j][1]){
                flag = false;
                if(a[j][1].size()<a[j][0].size()) cout<<a[j][1];
                else cout<<a[j][0];
            }
        }
        if(flag) cout<<b[i];
        cout<<" ";
    }
}

