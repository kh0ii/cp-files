#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(true){
        n-=i;
        if(n==0){
            cout<<"YES";
            break;
        }
        else if(n<0){
            cout<<"NO";
            break;
        }
        i++;
    }
}

