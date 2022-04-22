#include <bits/stdc++.h>
using namespace std;

int main(){
    string word;
    int upper=0, lower=0;
    cin>>word;
    for(int i=0; i<word.length(); i++){
        if(isupper(word[i])) upper++;
        else lower++;
    }
    if(upper>lower){
        for(int i=0; i<word.length(); i++) word[i] = toupper(word[i]);
    }
    else for(int i=0; i<word.length(); i++) word[i] = tolower(word[i]);
    cout<<word;
    return 0;
}
