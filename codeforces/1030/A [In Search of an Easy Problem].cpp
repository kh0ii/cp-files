#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int result[n];
    for(int i=0; i<n; i++) cin>>result[i];
    int i=0;
    for(int i=0; i<n; i++){
        if(result[i]==1){
            cout<<"HARD";
            return 0;
        }
    }
    cout<<"EASY";
    return 0;
}
