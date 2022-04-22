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
  
    string a, b;
    cin>>a>>b;
    for(int i=0; i<a.length(); i++){
    	if(int(tolower(a[i])) < int(tolower(b[i]))){
    		cout<<"-1";
    		return 0;
    	}
    	else if(int(tolower(a[i])) > int(tolower(b[i]))){
    		cout<<"1";
    		return 0;
    	}
    }
    cout<<"0";
  
    cerr << "Time taken : " << (float)clock() / CLOCKS_PER_SEC * 3000 << " ms" << endl;
    return 0;
}