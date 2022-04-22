#include <bits/stdc++.h>
using namespace std;
int ax, ay, bx, by, fx, fy, i;
void solve(){
    cin>>ax>>ay>>bx>>by>>fx>>fy;

    i = abs(ax - bx) + abs(ay - by);
    if((fy==ay && fy==by) || (fx==ax && fx==bx))
        if(fx>min(ax, bx) && fx<max(ax, bx)) i+=2;
        else if(fy>min(ay, by) && fy<max(ay, by)) i+=2;

    cout<<i<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
