#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    if(n<m) cout<<-1;
    else{
        int a = (n%2==0 ? n/2 : (n+1)/2);
        while(a%m!=0){
            a++;
        }
        cout<<a;
    }
}
