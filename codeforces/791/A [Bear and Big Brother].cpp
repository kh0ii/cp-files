#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, year=0;
    cin>>a>>b;
    bool flag = true;
    while(flag){
        year++;
        a *= 3;
        b *= 2;
        if(a>b) flag=false;
    }
    cout<<year;
    return 0;
}
