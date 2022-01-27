#include <bits/stdc++.h>
using namespace std;
int n;
void solve(){
    cin>>n;
    vector<int> a;
    vector<int> b;
    for(int i=0; i<n; i++){
        int j;
        cin>>j;
        a.push_back(j);
        b.push_back(j);
    }
    sort(b.begin(), b.end());
    int res=1;
    while(!(equal(a.begin(), a.end(), b.begin()))){
        for(int i=(res%2==0 ? 1 : 0); i<n-(res%2==0 ? 1 : 2); i+=2){
            if(a[i]>a[i+1]){
                swap(a[i], a[i+1]);
            }
        }
        res++;
    }
    cout<<res-1<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}

