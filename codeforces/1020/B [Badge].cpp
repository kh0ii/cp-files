#include <bits/stdc++.h>
using namespace std;

// Data types and numbers
#define ll long long 
#define MOD 1000000007

// Vector
#define pb push_back
#define pf push_front

#define vi vector<int>
#define vii vector<vi>
#define vs vector<string>
#define vb vector<bool>

#define sz(x) (int((x).size()))
#define bg(x) begin(x)
#define all(x) (x).begin(), (x).end()
#define rall(x) x.rbegin(), x.rend() 
#define sor(x) sort(all(x)) 

// Loops
#define each(a,x) for (auto& a: x)
#define FOR(i, k, n) for(int i=k; i<n; i++)

struct Node{
    int badges;
    int pointed;
};

void solve(){
    int n;
    cin>>n;
    struct Node node[n];
    FOR(i, 0, n){
        int j;
        cin>>j;
        node[i].pointed = j;
    }
    FOR(i, 0, n){
        FOR(k, 0, n) node[k].badges = 0;
        int j=i;
        bool flag = true;
        while(flag){
            node[j].badges += 1;
            if(node[j].badges==2){
                cout<<j+1<<' ';
                flag=false;
            }
            j = node[j].pointed-1;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
