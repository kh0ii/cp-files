#include <bits/stdc++.h>
using namespace std;
int main(){
    int x1, x2, x3;
    cin>>x1>>x2>>x3;
    int min, max;
    max = min = x1;
    if(x2 > max) max = x2;
    else if(x2 < min) min = x2;
    if(x3 > max) max = x3;
    else if(x3 < min) min = x3;
    int a=max*3;
    for(int i=min; i<max+1; i++){
        int p=abs(x1-i)+abs(x2-i)+abs(x3-i);
        if(p<a) a = p;
    }
    cout<<a;
}
