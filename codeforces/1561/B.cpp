#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
const double PI = 4 * atan(1);
int a, b;
void solve(){
    cin>>a>>b;
    int d = ceil(abs(a-b)/2);
    if((a+b)%2==0){
        cout<<(a+b-d-d)/2 + 1<<"\n";
        for(int i=d; i<=a+b-d; i+=2){
            cout<<i<<" ";
        }
    }
    else if((a+b)%2==1){
        cout<<(a+b-d-d) + 1<<"\n";
        for(int i=d; i<=a+b-d; i++){
            cout<<i<<" ";
        }
    }
    cout<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
