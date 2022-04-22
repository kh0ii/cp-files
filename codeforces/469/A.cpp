#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, p, k;
    cin>>n;
    int total[n];
    for(int i=0; i<n; i++) total[i] = i+1;
    cin>>p;
    while(p--){
        cin>>k;
        total[k-1]=0;
    }
    cin>>p;
    while(p--){
        cin>>k;
        total[k-1] = 0;
    }
    for(int i=0; i<n; i++){
        if(total[i]!=0){
            cout<<"Oh, my keyboard!";
            return 0;
        }
    }
    cout<<"I become the guy.";
}