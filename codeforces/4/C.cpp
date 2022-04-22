#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    map<string, int> names;
    string name;
    while(n--){
        cin>>name;
        if(names.count(name)==0){
            cout<<"OK"<<"\n";
            names[name] = 1;
        }
        else{
            cout<<name<<names[name]<<"\n";
            names[name]++;
        }
    }
    return 0;
}
