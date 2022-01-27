#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, res=0;
    cin>>n;
    int matrix[n][3];
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++) cin>>matrix[i][j];
    }

    for(int i=0; i<n; i++){
        x=0;
        for(int j=0; j<3; j++){
            if(matrix[i][j]==1) x++;
        }
        if(x>=2) res++;
    }
    cout<<res;
}
