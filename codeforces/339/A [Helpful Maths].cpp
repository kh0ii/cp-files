#include <bits/stdc++.h> 
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
	#ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("error.txt", "w", stderr);
    	freopen("output.txt", "w", stdout);
	#endif
  
    string s;
    cin>>s;
    int num[int(s.length()/2)];
    int j=0;
    for(int i=0; i<s.length(); i+=2){
    	num[j] = int(s[i])-48;
    	j++;
    }
    sort(num, num+j);
    for(int i=0; i<j; i++){
    	if(i==0){}
    	else cout<<"+";
    	cout<<num[i];
    }

  
    cerr << "Time taken : " << (float)clock() / CLOCKS_PER_SEC *3000 << " ms" << endl;
    return 0;
}