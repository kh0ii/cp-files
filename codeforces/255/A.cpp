#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int j,x(0), y(0), z(0);
	for(int i=0; i<n; i++){
		cin>>j;
		if(i%3==0) x+=j;
		else if(i%3==1) y+=j;
		else z+=j;
	}
	if(x==max(max(x,y), z)) cout<<"chest";
	else if(y==max(max(x, y), z)) cout<<"biceps";
	else cout<<"back";
    return 0;
}