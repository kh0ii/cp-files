#include <bits/stdc++.h>
using namespace std;
int main(){
    string num1, num2;
    cin>>num1>>num2;
    for(int i=0; i<num1.length(); i++){
        if(num1[i]!=num2[i]) cout<<"1";
        else cout<<0;
    }
    return 0;
}
