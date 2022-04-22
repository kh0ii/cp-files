#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, score, res=0, a, b;
    cin>>n;
    cin>>score;
    if(n==1){
        cout<<"0";
        return 0;
    }
    a=score;
    b=score;
    n--;
    while(n--){
        cin>>score;
        if(score>a){
            a = score;
            res++;
        }
        else if(score<b){
            b = score;
            res++;
        }
    }
    cout<<res;
}