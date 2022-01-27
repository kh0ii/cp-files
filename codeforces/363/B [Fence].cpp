// Problem: B. Fence
// Contest: Codeforces - Codeforces Round #211 (Div. 2)
// URL: https://codeforces.com/problemset/problem/363/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
typedef vector<int> VI;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	cin>>n>>k;
	VI a;
	for(int i=0; i<n; i++){
		int j;
		cin>>j;
		a.PB(j);
	}
	int first=0;
	for(int i=0; i<k; i++) first+=a[i];
	
	int index=1, ans = first, sum;
	
	for(int i=1; i<n-k+1; i++){
		sum = first - a[i-1]+a[i+k-1];
		ans = min(sum, ans);
		index = (ans==sum ? i+1 : index);
		first = first - a[i-1]+a[i+k-1];
	}
	cout<<index;
	return 0;
}
