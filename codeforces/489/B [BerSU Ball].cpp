#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
const double PI = 4 * atan(1);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    cin>>m;
    int b[m];
    for(int i=0; i<m; i++) cin>>b[i];
    sort(a, a+n); sort(b, b+m);
    int res=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(abs(a[i]-b[j])<2){
                res++;
                a[i] = 1000;
                b[j] = 1000;
                break;
            }
        }
    }
    cout<<res;
    return 0;
}
