#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[12], k;
    cin>>k;
    for(int i=0; i<12; i++) cin>>a[i];
    sort(a, a+12);   
    bool flag=true;
    for(int i=11; i>=0; i--){
        if(k<=0){
            flag=false;
            cout<<12-i-1;
            break;
        }
        else k-=a[i];
    }
    if(k>0) cout<<-1;
    else if(k==0&&flag) cout<<12;
}

