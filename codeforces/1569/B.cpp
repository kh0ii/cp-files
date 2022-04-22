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
#define sorr(x) sort(rall(x)) 

// Loops
#define each(a,x) for (auto& a: x)
#define FOR(i, k, n) for(int i=k; i<n; i++)
#define FORN(i, n) for(int i=0; i<n; i++)

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int k = count(all(s), '2');
    if(k==0){
        cout<<"YES\n";
        FOR(i, 0, n){
            FOR(j, 0, n){
                if(i==j) cout<<'X';
                else cout<<'=';
            }
            cout<<'\n';
        }
    }
    else if(k==1 || k==2){
        cout<<"NO\n";
    }
    else{
        char a[n][n];
        FOR(i, 0, n){
            FOR(j, 0, n) a[i][j] = '0';
        }
        cout<<"YES\n";
        FOR(i, 0, n){
            bool iswin = true;
            FOR(j, 0, n){
                if(i==j){
                    a[i][j] = 'X';
                }
                else{
                    if(s[j]=='1'){
                        a[i][j] = '=';
                        a[j][i] = '=';
                    }
                    else{
                        if(a[i][j]=='0'&&a[j][i]=='0'){
                            if(iswin){
                                a[i][j] = '+';
                                a[j][i] = '-';
                                iswin = false;
                            }
                            else{
                                a[i][j] = '-';
                                a[j][i] = '+';
                            }
                        }
                    }
                }
            }
        }
        FOR(i, 0, n){
            FOR(j, 0, n) cout<<a[i][j];
            cout<<'\n';
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t; while(t--)
    solve();
    return 0;
}