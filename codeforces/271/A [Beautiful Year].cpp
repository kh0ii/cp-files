#include <bits/stdc++.h>
using namespace std;

int main(){
    int year;
    cin>>year;
    string stryear = to_string(year);
    bool found=false, flag=true;
    while(!found){
        year++;
        flag=true;
        stryear = to_string(year);
        for(int i=0; i<stryear.length(); i++){
            for(int j=0; j<i; j++){
                if(stryear[i]==stryear[j]) flag=false;
            }
        }
        if(flag) found=true;
    }
    cout<<year;
    return 0;
}
