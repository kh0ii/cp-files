#include <bits/stdc++.h>
using namespace std;
int k;
void solve(){
    cin>>k;
    int row, col, res;
    res = (int(sqrt(k)+0.5))*(int(sqrt(k)+0.5));
    if(res>k){
        row = sqrt(res);
        col = res - k + 1;
    }
    else if(res<k){
        row = k - res;
        col = sqrt(res)+1;
    }   
    else{
        row = sqrt(res);
        col = 1;  
    }
    cout<<row<<" "<<col<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}

