#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, t;
    cin>>s>>t;
    int i=0, j=0, res=1;
    while(j<t.size()){
        if(s[i]==t[j]){
            res++;
            i++;
            j++;
        }
        else j++;
    }
    cout<<res;
}

