#include <bits/stdc++.h>
using namespace std;
int main(){
    string x;
    bool flag;
    int temp, counter, i=1;
    cin>>x;
    while(i<x.length()){
        temp = i;
        counter = 0;
        while(x[i-1]==x[i]){
            i++;
            counter++;
        }
        if(counter>=6){
            cout<<"YES";
            return 0;
        }
        i = temp+1;
    }
    cout<<"NO";
    return 0;
}
