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

void solve(){
    int n;
    cin>>n;
    if(n<10){
        if(n==0) cout<<"zero";
        else if(n==1) cout<<"one";
        else if(n==2) cout<<"two";
        else if(n==3) cout<<"three";
        else if(n==4) cout<<"four";
        else if(n==5) cout<<"five";
        else if(n==6) cout<<"six";
        else if(n==7) cout<<"seven";
        else if(n==8) cout<<"eight";
        else if(n==9) cout<<"nine";
    }
    else if(n<20){
        if(n==10) cout<<"ten";
        else if(n==11) cout<<"eleven";
        else if(n==12) cout<<"twelve";
        else {
            if(n==13) cout<<"thir";
            else if(n==14) cout<<"four";
            else if(n==15) cout<<"fif";
            else if(n==16) cout<<"six";
            else if(n==17) cout<<"seven";
            else if(n==18) cout<<"eigh";
            else if(n==19) cout<<"nine";
            cout<<"teen";
        }
    }
    else{
        int k = n%10;
        int j = (n/10)%10;
        if(j==2) cout<<"twen";
        else if(j==3) cout<<"thir";
        else if(j==4) cout<<"for";
        else if(j==5) cout<<"fif";
        else if(j==6) cout<<"six";
        else if(j==7) cout<<"seven";
        else if(j==8) cout<<"eigh";
        else if(j==9) cout<<"nine";
        cout<<"ty";
        if(k==1) cout<<"-one";
        else if(k==2) cout<<"-two";
        else if(k==3) cout<<"-three";
        else if(k==4) cout<<"-four";
        else if(k==5) cout<<"-five";
        else if(k==6) cout<<"-six";
        else if(k==7) cout<<"-seven";
        else if(k==8) cout<<"-eight";
        else if(k==9) cout<<"-nine";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
