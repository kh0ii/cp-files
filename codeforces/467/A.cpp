#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, res=0;
    cin>>n;
    int room[n][2];
    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++) cin>>room[i][j];
    }
    for(int i=0; i<n; i++){
        if(room[i][1]-room[i][0]>1) res++;
    }
    cout<<res;
    return 0;
}
