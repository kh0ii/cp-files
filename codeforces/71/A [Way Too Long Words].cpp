#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string word[n];
    for(int i=0; i<n; i++) cin>>word[i];
    for(int i=0; i<n; i++){
        if(word[i].length()>10){
            cout<<word[i][0]<<word[i].length()-2<<word[i][word[i].length()-1];
        }
        else cout<<word[i];
        cout<<"\n";
    }
    return 0;
}
