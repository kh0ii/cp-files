#include <bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE
    int t, res=0;
    cin>>t;
    int a[t][2];
    for(int i=0; i<t; i++){
        cin>>a[i][0]>>a[i][1];
    }
    for(int i=0; i<t; i++){
        for(int j=i+1; j<t; j++){
            if(a[i][1]==a[j][0]){
                if(a[i][0]==a[j][1]) res++;
                res++;
            }
            else if(a[i][0]==a[j][1]){
                if(a[i][1]==a[j][0]) res++;
                res++;
            }
        }
    }
    cout<<res;
}
