#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, k, res=0;
	cin>>n>>k;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
		a[i] = a[i]+k;
	}
	for(int i=0; i<n; i++){
		if(a[i]<=5) res++;
	}
	if(res<3) cout<<"0"<<"\n";
	else cout<<(res-(res%3))/3<<"\n";
}
