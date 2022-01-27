#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, i=1, counter=1;
    cin>>n;
    long long str[n];
    cin>>str[0];
    while(n>1){
        cin>>str[i];
        if(str[i]==str[i-1]){}
        else counter++;
        i++;
        n--;
    }
    cout<<counter;
}
