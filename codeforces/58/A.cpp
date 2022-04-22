#include <bits/stdc++.h>
using namespace std;
int main(){
    string word, chat="hello";
    cin>>word;
    bool flag;
    int k=0;
    for(int i=0; i<word.length(); i++){
        if(word[i]==chat[k]) k++;
    }
    if(k==5){
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;
}
