#include <bits/stdc++.h>
using namespace std;
int main(){
    string word;
    char u;
    cin>>word;
    bool flag = true;
    for(size_t i=1; i<word.length(); i++){
        if(islower(word[i])) flag = false;
    }

    if(flag){
        for(size_t i=0; i<word.length(); i++){
            if(islower(word[i]))
                u = toupper(word[i]);
            else
                u = tolower(word[i]);
            cout << u;
        }
    }
    else cout<<word;
    return 0;
}
