#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a = s.find("AB");
    int b = s.rfind("BA");
    int c = s.rfind("AB");
    int d = s.find("BA");
    if(a==string::npos||b==string::npos) cout<<"NO";
    else if(max(abs(a-b), abs(c-d))<2){
        cout<<"NO";
    }
    else cout<<"YES";
}

