#include <bits/stdc++.h>
using namespace std;
int main(){
    int m, n;
    cin>>m>>n;
    string draw[m][n];

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++) draw[i][j] = "#";
    }

    for(int i=1; i<m; i+=4){
        for(int j=0; j<n-1; j++) draw[i][j]=".";
    }

    for(int i=3; i<m; i+=4){
        for(int j=n-1; j!=0; j--) draw[i][j]=".";
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++) cout<<draw[i][j];
        cout<<"\n";
    }
    return 0;
}
