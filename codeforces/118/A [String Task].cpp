#include <bits/stdc++.h>
using namespace std;
int main(){
    string word;
    cin>>word;
    for_each(word.begin(), word.end(), [](char & c){
        c = ::tolower(c);
    });
    for(int i=0; i<word.length(); i++){
        if(word[i] == 'a'|| word[i]=='o' || word[i]=='y' || word[i]=='e' || word[i]=='u' || word[i]=='i'){}
        else cout<<"."<<word[i];
    }
    return 0;
}
