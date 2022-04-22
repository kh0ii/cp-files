// Problem: A. A and B and Chess
// Contest: Codeforces - Codeforces Round #294 (Div. 2)
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define vi vector<int>
#define FOR(i, n) for(int i=0; i<n; i++)
#define MOD 1000000007
#define sz(x) (int((x).size()))
#define ll long long
#define all(n) (n).begin(), (n).end()

int check(char s){
	s = tolower(s);
	switch (s){
		case 'q':
			return 9;
		case 'r':
			return 5;
		case 'b':
			return 3;
		case 'n':
			return 3;
		case 'p':
			return 1;
		case 'k':
			return 0;
	}
}

void solve(){
	string s[8];
	int a(0), b(0);
	FOR(i, 8){
		cin>>s[i];
		FOR(j, 8){
			if(islower(s[i][j])) a+=check(s[i][j]);
			else if(isupper(s[i][j])) b+=check(s[i][j]);
		}
	}
	if(a>b) cout<<"Black";
	else if(b>a) cout<<"White";
	else cout<<"Draw";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
