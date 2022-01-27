#include <bits/stdc++.h> 
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("error.txt", "w", stderr);
        freopen("output.txt", "w", stdout);
    #endif
  
    int t;
    cin>>t;
    int a[t+1], b;
    for(int i=1; i<=t; i++){
        cin>>b;
        a[b] = i;
    }
    
    for(int i=1; i<=t; i++) cout<<a[i]<<" ";


    cerr << "Time taken : " << (float)clock() / CLOCKS_PER_SEC * 1000<< " ms" << endl;
    return 0;
}