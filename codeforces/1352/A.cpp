#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int res=0;
        cin>>s;
        for(int i=0; i<s.length(); i++)
            if(s[i]!='0') res++;
        cout<<res<<"\n";
        for(int i=0; i<s.length(); i++){
            if(s[i]!='0'){
                cout<<s[i];
                for(int j=i+1; j<s.length(); j++) cout<<"0";
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}
